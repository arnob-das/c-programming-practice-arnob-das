#include <stdio.h>
#include <string.h>
int main()
{
    char first[20] = "first";
    char second[10] = "second";
    // add two strings using strcat() function.

    // strcat(first, " ");
    // strcat(first, second);
    // puts(first);

    // add two strings without strcat() function.
    int i = 0, j = 0;

    for (i = strlen(first);; i++)
    {
        first[i] = second[j];

        if (second[j] == '\0')
        {
            break;
        }

        j++;
    }
    puts(first);
}