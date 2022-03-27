#include <stdio.h>
int main()
{
    // int v = 50;

    // & => reference operator
    // &v => memory reference operator or memory address of v
    // v => value of v

    // print the value of v
    // printf("v = %d\n", v);
    // by pointer
    // printf("value of v is %d\n", *(&v));

    // print the memory location of v
    // printf("memory location of v is %d\n", &v);
    // printf("memory location of v is %u\n", &v);

    // value of v by memory location
    // printf *memoryLocationOfV = &v;
    // printf("v = %d\n", *memoryLocationOfV);

    // output
    // v = 50
    // memory location of v is 6422300

    // de-reference operator => *(memory location) => value stored at that location

    int v = 2, *p;
    p = &v;

    // printf("Address of v = %u\n", &v);
    // printf("Address of p = %u\n", &p);
    // printf("Value of p = %u\n", p);
    // printf("value of v is %u\n", v);
    // printf("Value of v is %u\n", *(&v));
    // printf("Value of v is %u\n", *p);

    // size of pointer of different data type
    // printf("size of pointer of integer data type : %d\n", sizeof(int*));
    // printf("size of pointer of float data type : %d\n", sizeof(float *));
    // printf("size of pointer of double data type : %d\n", sizeof(double *));
    // printf("size of pointer of char data type : %d\n", sizeof(char *));

    int *ptr;
    printf("Size of ptr variable is : %d\n", sizeof(p));
}