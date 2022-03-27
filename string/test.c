//1
#include <stdio.h>
int main()
{
    int i, j, k, px[] = {-2, -2, -1, -1, 1, 1, 2, 2}, py[] = {-1, 1, -2, 2, -2, 2, -1, 1};
    int cox[4][4] = {{0}};
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 8; k++)
            {
                if (((i + px[k]) >= 0 && (i + px[k]) < 4) && ((j + py[k]) >= 0 && (j + py[k] < 4)))
                {
                    cox[i][j]++;
                }
            }

            printf("%d\t", cox[i][j]);
        }
        printf("\n\n");
    }
}

///////////////////////////

// 2
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char str[500];
    printf("Enter your string\n");
    gets(str);
    puts(str);
    int length = strlen(str);

    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (str[i] == ' ' && (int)str[i - 1] != 32)
        {
            count++;
        }
    }
    count++;
    printf("%d\n", count);
}
*/

///////////////
// 3
/*
#include <stdio.h>
int isPrime(int n, int i)
{
    if (n == 0 || n == 1)
    {
        return 0;
    }
    else if (i == 1)
        return 1; // return statement terminates the recursive funtion
    else if (n % i == 0)
        return 0;
    else
        isPrime(n, i - 1); // recursive call not using return statement
}
int main()
{
    int n;
    printf("Enter a positive number\n");
    scanf("%d", &n);
    int check = isPrime(n, n / 2);

    if (check == 0)
    {
        printf("Not Prime\n");
    }
    else
    {
        printf("Prime\n");
    }
}
*/

////////////////////////////////////

// 4
/*
#include <stdio.h>
int main()
{
    int a = 5, b = 10, c = 15, choice;
    // choice = a > b && a > c ? a : (b > c ? b : c);
    // printf("%d\n", choice);

    if (a > b && a > c)
    {
        choice = a;
    }
    else
    {
        if (b > c)
        {
            choice = b;
        }
        else
        {
            choice = c;
        }
    }
    printf("%d\n", choice);
}
*/

////////////////////////////////////

// 5

/*
#include <stdio.h>
int main()
{

    printf("Vogoban Kripa Koro\n");

    typedef struct cricket
    {
        char playerName[100];
        char teamName[100];
        int battingAverage;
    } strcrc;

    strcrc allData[50];

    int i; 
    // input data
    for (i = 0; i < 50; i++)
    {

        // fget is used not to take morethan 100 characters as input
        // strcspn function is called here to escape enter as input

        printf("Enter Player Name: \n");
        fgets(allData[i].playerName, 100, stdin);
        allData[i].playerName[strcspn(allData[i].playerName, "\n")] = 0;

        printf("Enter Team Name: \n");
        fgets(allData[i].teamName, 100, stdin);
        allData[i].teamName[strcspn(allData[i].teamName, "\n")] = 0;

        printf("Enter batting average: \n");
        scanf("%d%*c", &allData[i].battingAverage);
    }


    // print teamwise batting average
    for (i = 0; i < 50; i++)
    {
        printf("Team Name: %s\t and Batting Average: %d \n", allData[i].teamName, allData[i].battingAverage);
    }

    return 0;
}
*/


// 5

/*
#include <stdio.h>
int main()
{


    typedef struct cricket
    {
        char playerName[100];
        char teamName[100];
        int battingAverage;
    } strcrc;

    strcrc allData[50];

    int i; 
    // input data
    for (i = 0; i < 50; i++)
    {

        printf("Enter Player Name: \n");
        fgets(allData[i].playerName, 100, stdin);
        allData[i].playerName[strcspn(allData[i].playerName, "\n")] = 0;

        printf("Enter Team Name: \n");
        fgets(allData[i].teamName, 100, stdin);
        allData[i].teamName[strcspn(allData[i].teamName, "\n")] = 0;

        printf("Enter batting average: \n");
        scanf("%d%*c", &allData[i].battingAverage);
    }


    // print teamwise batting average
    for (i = 0; i < 50; i++)
    {
        printf("Team Name: %s\t and Batting Average: %d \n", allData[i].teamName, allData[i].battingAverage);
    }

    return 0;
}
*/