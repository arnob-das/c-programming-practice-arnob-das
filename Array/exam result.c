#include <stdio.h>
int main()
{
    int ft_marks[40] = {83, 86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 59, 63, 86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82, 58, 69, 67, 53, 56, 71, 62, 63, 63};

    int st_marks[40] = {86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90, 59, 86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82, 82, 69, 67, 53, 56, 71, 62, 49, 65, 66};
    
    int final_marks[40] = {87, 64, 91, 43, 89, 66, 58, 73, 99, 81, 100, 64, 69, 70, 81, 85, 81, 80, 67, 88, 71, 62, 78, 58, 66, 98, 75, 86, 90, 80, 85, 100, 55, 69, 85, 81, 80, 67, 88, 71};

    int i, j, k, count = 0, sum = 0;
    double total_marks[40];

    // calculaitng everyone's result

    for (i = 0; i < 40; i++)
    {
        total_marks[i] = ft_marks[i] / 4.0 + st_marks[i] / 4.0 + final_marks[i] / 2.0;
    }

    // showing everyone's result

    for (i = 1; i <= 40; i++)
    {
        printf("Roll NO: %d\t Total Marks: %0.2lf\n", i, total_marks[i - 1]);
    }

    printf("\n");
    printf("\n");

    // checking how many students got same marks

    for (i = 0; i < 40; i++) //  taking marks one by one
    {
        for (j = 0; j <= 39; j++) // checking that marks with every student's marks
        {
            if (final_marks[i] == final_marks[j]) // if marks matches
            {
                count++; // increasing count value;
            }
        }

        printf("%d students get %0.2lf marks \n", count, total_marks[i]);

        count = 0; // set the count value to 0 (Zero) after checking every marks
    }

    return 0;
}