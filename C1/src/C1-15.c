// Exercise 1-15.
// Rewrite the temperature conversion program of Section 1.2 to use a function
// for conversion.

#include <stdio.h>

float fahr_to_celsius(float fahr);

int main(int argc, char const *argv[])
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    printf("a heading above the table\n");
    fahr = lower;
    while (fahr <= upper)
    {
        celsius = fahr_to_celsius(fahr);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}

float fahr_to_celsius(float fahr)
{
    return 5.0 * (fahr - 32.0) / 9.0;
}