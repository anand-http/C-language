#include <stdio.h>
int main()
{

    // C program to check you entered 1,2 or 3 number using IF and ELSE IF statement

    int num;
    printf("enter the no.\n");
    scanf("%d", &num);

    if (num == 1)
    {
        printf("your no. is 1\n");
    }
    else if (num == 2)
    {
        printf("your no. is 2");
    }

    else if (num == 3)
    {

        printf("your no. is 3");
    }
    else
    {
        printf("your no. is not 1 not 2 not 3");
    }

    return 0;
}