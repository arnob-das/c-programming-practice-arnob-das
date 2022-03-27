#include <stdio.h>

// function to get the length of a string
int string_length(char str[])
{
    int length = 0;

    // for (length = 0; str[length] != '\0';)
    // {
    //     length++;
    // }
    
    // for (length = 0; str[length] != '\0';length++)
    // {
    //     length++;
    // }

    // for (length = 0; str[length] != '\0';length++)

    while(str[length] != '\0'){
        length++;
    }

    return length;
}

// main function
int main()
{
    int length;
    char country[100];
    /*
    *******   Note: for a string => scanf() function takes character as input until it finds any 'tab' or 'whitespace'
    *******   we can get rid of this problem by using *** gets()*** function to take input.
    */

    // using scanf() function
    // while (1 == scanf("%s", country))
    //{
    //    length = string_length(country);
    //    printf("%d\n", length);
    //}

    // using gets() function
    while (NULL != gets(country))
    {
        length = string_length(country);
        printf("%d\n", length);
    }

    return 0;
}