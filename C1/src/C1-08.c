// Exercsise 1-8.
// Write a program to count blanks, tabs, and newlines.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c;
    int blanks_counter, tabs_counter, newlines_counter;
    blanks_counter = tabs_counter = newlines_counter = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            newlines_counter++;
        }
        else if (c == '\t')
        {
            tabs_counter++;
        }
        else if (c == ' ')
        {
            blanks_counter++;
        }
    }
    printf("blanks: %d, tabs: %d, newlines: %d\n", blanks_counter, tabs_counter, newlines_counter);
    return 0;
}