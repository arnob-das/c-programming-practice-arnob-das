/*
Course Name: Elementary Struuctured Programming Lab
Assignment No: 1
Semester: 1st Semester
Group: C2
ID: 20210104148
*/


#include <stdio.h>
int main() {
    int n1, n2, n3;
    
    printf("Enter three different numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    //when n1 is greater than both n2 and n3
    if (n1 >= n2 && n1 >= n3)
        printf("%d is the largest number.", n1);

    //when n2 is greater than both n1 and n3
    if (n2 >= n1 && n2 >= n3)
        printf("%d is the largest number.", n2);

    //when n3 is greater than both n1 and n2
    if (n3 >= n1 && n3 >= n2)
        printf("%d is the largest number.", n3);

    return 0;
}
