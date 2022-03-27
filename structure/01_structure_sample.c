#include <stdio.h>
int main()
{
    struct address
    {
        char phone[15];
        char city[25];
        int pin;
    };

    struct emp
    {
        char name[25];
        struct address a;
    };

    struct emp e = {"Karim", "01732112092", "Dhaka", 10};
    printf("name: %s\nphone: %s\n", e.name, e.a.phone);

    return 0;
}