#include <stdio.h>
int main()
{
    int i, length = 10;

    char country[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'E', 's', 'h'};
    printf("%s\n", country);

    for (i = 0; i < length; i++)
    {
        // 'a' = 97 and 'z' = 122
        if (country[i] >= 97 && country[i] <= 122) // catching lower case character
        {
            country[i] = 'A' + (country[i] - 'a'); // convert to upper case
            printf("%c", country[i]);
        }
    }
    return 0;
}