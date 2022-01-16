#include <stdio.h>
int main()
{
    int ft_marks[40] = {83, 86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 59, 63, 86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82, 58, 69, 67, 53, 56, 71, 62, 63, 63};

    int st_marks[40] = {86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90, 59, 86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82, 82, 69, 67, 53, 56, 71, 62, 49, 65, 66};

    int final_marks[40] = {87, 64, 91, 43, 89, 66, 58, 73, 99, 81, 100, 64, 69, 70, 81, 85, 81, 80, 67, 88, 71, 62, 78, 58, 66, 98, 75, 86, 90, 80, 85, 100, 55, 69, 85, 81, 80, 67, 88, 71};

    int i, flag, total_marks[40], marks_count[101];

    // calculaitng everyone's result

    for (i = 0; i < 40; i++)
    {
        total_marks[i] = ft_marks[i] / 4 + st_marks[i] / 4 + final_marks[i] / 2;
    }

    // checking how many students got same marks

    for (i = 0; i <= 101; i++)
    {
        marks_count[i] = 0;
    }

    for (i = 0; i < 40; i++)
    {
        marks_count[total_marks[i]]++;
    }

    for (i = 0; i <= 100; i++)
    {
        if (marks_count[i] > 0)
        {
            printf("Marks: %d \t Counts: %d\n", i, marks_count[i]);
        }
    }

    return 0;
}