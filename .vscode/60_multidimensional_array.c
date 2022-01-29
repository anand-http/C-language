#include <stdio.h>
int main()
{

    // 2dimesional array

    int students = 3;
    int subject = 5;

    int marks[3][5];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("enter the marks of student %d in subject %d\n", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    printf("\n");
    printf("\n");
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("The marks of student %d in subject %d is %d\n\n\n", i + 1, j + 1, marks[i][j]);
        }
    }

    return 0;
}