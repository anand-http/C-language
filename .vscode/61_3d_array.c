#include <stdio.h>
int main()
{

    // 3 Dimensional array

    int stduents = 3;
    int subject = 3;
    int school = 1;

    int marks[3][3][1];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 1; k++)
            {
                printf("enter the marks of student %d in subject %d of school %d\n\n", i + 1, +j + 1, k + 1);
                scanf("%d", &marks[i][j][k]);
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 1; k++)
            {
                printf("The marks of student %d in subject %d of school %d is %d\n\n\n", i + 1, +j + 1, k + 1, marks[i][j][k]);
            }
        }
    }

    return 0;
}