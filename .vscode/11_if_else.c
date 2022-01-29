#include <stdio.h>
int main()
{

    //   program to check whether the no. is even or odd using if and else

    int a;
    printf("enter the no. to check whether the no. is even or odd\n");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("%d is even no.\n", a);
    }
    else
    {
        printf("%d is odd no.\n", a);
    }

       return 0;
}