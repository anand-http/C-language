#include <stdio.h>
int main()
{

    // C program to find greatest number among 4 number

    int num1, num2, num3, num4;
    int c;
    printf("enter number 1\n");
    scanf("%d", &num1);
    printf("enter number 2\n");
    scanf("%d", &num2);
    printf("enter number 3\n");
    scanf("%d", &num3);
    printf("enter number 4\n");
    scanf("%d", &num4);

    if (num1 > num2 || num1 > num3 || num1 > num4)
    {
        printf("%d is the greatest number\n", num1);
    }

    else
    {
        if (num2 > num1 || num2 > num3 || num2 > num4)
        {
            printf("%d is the greatest number\n", num4);
        }
        else
        {

            if (num3 > num1 || num3 > num2 || num3 > num4)
            {
                printf("%d is the greatest number\n", num3);
            }

            else
            {
                if (num4 > num1 || num4 > num2 || num4 > num3)
                {
                    printf("%d is the greatest number\n", num4);
                }
            }
        }
    }

    return 0;
}