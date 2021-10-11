// Exercise 1-13.
// Write a program to print a histogram of the lengths of words in its input.
// It is easy to draw the histogram with the bars horizontal;
// a vertical orientation is more challenging.

#include <stdio.h>

#define IN 1
#define OUT 0
#define MAX_WORD 15

int main(int argc, char const *argv[])
{
    int c, state, cwl, overflow;
    state = OUT;
    cwl = overflow = 0;

    int wl[MAX_WORD];
    for (int i = 0; i < MAX_WORD; ++i)
    {
        wl[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
            if (cwl >= MAX_WORD)
            {
                overflow++;
            }
            else
            {
                wl[cwl]++;
            }
            cwl = 0;
        }
        else if (state == OUT)
        {
            cwl++;
            state = IN;
        }
        else
        {
            cwl++;
        }
    }

    wl[0] = overflow;
    for (int i = 0; i < MAX_WORD; ++i)
    {
        if (i == 0)
            printf("ov: ");
        else
            printf("%2d: ", i);

        for (int j = 0; j < wl[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}
