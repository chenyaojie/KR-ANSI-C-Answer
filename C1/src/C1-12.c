// Exercise 1-12.
// Write a program that prints its input one word per line.

#include <stdio.h>
#define IN 1
#define OUT 0

int main(int argc, char const *argv[])
{
    int c, state;
    state = OUT;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
        }
        else if (state == OUT)
        {
            printf("\n");
            state = IN;
            putchar(c);
        }
        else
        {
            putchar(c);
        }
    }
    return 0;
}
