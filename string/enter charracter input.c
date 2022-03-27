#include <stdio.h>
int main(){
    //char countryName[20];
    // for(int i = 0; i <8;i++){
    //     scanf("%c%*c", &countryName[i]);
    // }

    // for(int i = 0; i <8;i++){
    //     // %*c will work to avoid "enter press from keyboard" while taking input
    //     printf("%c", countryName[i]);
    // }

    // printf("%c", countryName[0]);

    ////////////////////////////////////////////////////////////////////////////////////////////////

    char name[8];
    gets(name);
    //scanf("%s", &name);
    printf("%s", name);

    return 0;
}