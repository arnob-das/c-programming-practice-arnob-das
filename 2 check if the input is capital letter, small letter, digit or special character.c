/*
Course Name: Elementary Struuctured Programming Lab
Assignment No: 1
Semester: 1st Semester
Group: C2
ID: 20210104148
*/

#include <stdio.h>

int main()
{
    char ch;

    //Input a character from user
    printf("Enter any character: ");
    scanf("%c", &ch);
    
    // asci value range for small letter is 97 to 122
    if(ch >= 97 && ch <= 122){
        printf("'%c' is small letter.", ch);
    }
    //asci value range for capital letter is 65 to 90
    else if(ch >= 65 && ch <= 90){
        printf("'%c' is capital letter", ch);
    }
    //asci value range for digit is 48 to 57
    else if(ch >= 48 && ch <= 57)
    {
        printf("'%c' is digit.", ch);
    }
    else
    {
        printf("'%c' is special character.", ch);
    }

    return 0;
}
