// Exercise 1-14.
// Write a program to print a histogram of the frequencies of
// different characters in its input.

#include <stdio.h>
#include <ctype.h>
#define MAXCHAR 128

int main(int argc, char const *argv[])
{
    int c;
    int cc[MAXCHAR];
    for (int i = 0; i < MAXCHAR; ++i)
    {
        cc[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c < MAXCHAR)
        {
            cc[c]++;
        }
    }

    for (int i = 0; i < MAXCHAR; ++i)
    {

        if (isprint(i))
        {
            printf("%5d - %c - %5d : ", i, i, cc[i]);
        }
        else
        {
            printf("%5d -   - %5d : ", i, cc[i]);
        }

        for (int j = 0; j < cc[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
