#include <stdio.h>
int main()
{

    int arr[5] = {
        100,
        200,
        300,
        400,
        500,
    };

    printf("the value of 1 is %d\n", arr[0]);
    printf("the value of 2 is %d\n", arr[1]);
    printf("the value of 3 is %d\n", arr[2]);
    printf("the value of 4 is %d\n", arr[3]);
    printf("the value of 5 is %d\n\n\n", arr[4]);

    for (int i = 0; i < 5; i++)
    {
        printf("the value of %d id %d\n", i + 1, arr[i]);
    }

    //by taking input from user

    int marks[5];

    for (int i = 0; i < 5; i++)
    {
        printf("enter the marks of student %d:\n", i + 1);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("the marks of student %d is %d\n", i + 1, marks[i]);
    }

    return 0;
}