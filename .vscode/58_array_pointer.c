#include <stdio.h>
int main()
{
    int a[4];
    int *ptr;
    ptr = &a[0];

    for (int i = 0; i < 4; i++)
    {
        printf("enter the value of marks for student  %dth\n", i + 1);
        scanf("%d", ptr);
        ptr++;
    }
    for (int i = 0; i < 4; i++)
    {
        printf("the marks of student %dth is %d\n", i + 1, a[i]);
    }

    return 0;
}