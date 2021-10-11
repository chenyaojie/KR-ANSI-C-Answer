// Exercise 1-4.
// Write a program to print the corresponding Celsius to Fahrenheit table.

#include <stdio.h>

int main(int argc, char const *argv[]) {
    float fahr, celsius;
    int lower, upper, step;

    lower = -40;
    upper = 120;
    step = 20;

    celsius = lower;
    while (celsius <= upper) {
        fahr = (celsius * 9.0 / 5.0) + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}
