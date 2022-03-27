#include <stdio.h>
int main()
{
    char country[] = {'b', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', '\0'}; // with back slash 0
    printf("%s\n", country);

    char country1[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', ' ', 'i', 's', ' ', 'm', 'y', ' ', 'c', 'o', 'u', 'n', 't', 'r', 'y'}; // without back slash
    printf("%s\n", country1);

    char country2[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', '\0', 'i', 's', ' ', 'm', 'y', ' ', 'c', 'o', 'u', 'n', 't', 'r', 'y'}; // back slash in the middle
    printf("%s\n", country2);

    printf("%c\n", country[0]);

    return 0;
}