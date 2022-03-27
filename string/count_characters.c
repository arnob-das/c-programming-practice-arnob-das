#include <stdio.h>
#include <string.h>
int main()
{
    int count = 0;
    char name[20];

    // fgets(name, 20, stdin);
    // name[strcspn(name, "\n")] = '\n';

    int i = 0;
    while (name[i] != '\0')
    {
        i++;
        count++;
    }
    // printf("%d\n", count);
    // printf("%d\n", strlen(name));

    // checking vowel
    char vowel[20];
    i = 0, count = 0;

    fgets(vowel, 20, stdin);
    vowel[strcspn(vowel, "\n")] = '\0';

    vowel[20] = strlwr(vowel); // convert string to lower case

    while (vowel[i] != '\0')
    {
        if (vowel[i] == 'a' || vowel[i] == 'e' || vowel[i] == 'i' || vowel[i] == 'o' || vowel[i] == 'u')
        {
            count++;
        }
        i++;
    }

    printf("%d\n", count);

    return 0;
}