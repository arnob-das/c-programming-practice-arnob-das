#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct address
    {
        char phone[15];
        char city[25];
        int pin;
    } std; // here  std means "struct address"

    struct emp
    {
        char name[25];
        std a;
    };

    struct emp e = {"Karim", "01732112092", "Dhaka", 10};
    printf("name: %s\nphone: %s\n", e.name, e.a.phone);

    std newAddress, *strPointer;
    newAddress.pin = 15;

    // assign string value in structure variable by strcpy() function
    strcpy(newAddress.city, "Bogura");

    printf("new pin: %d\n", newAddress.pin);
    printf("New City: %s\n", newAddress.city);

    strPointer = &newAddress;

    printf("Memory Location of newAddress : %u\n", strPointer);

    // show value of structure through pointer varibale
    printf("city: %s\n", strPointer->city);

    // update value of structure by pointer
    strPointer->pin = 800;

    printf("new pin: %d\n", strPointer->pin); // 800
    printf("new pin: %d\n", newAddress.pin);  // 800

    return 0;
}