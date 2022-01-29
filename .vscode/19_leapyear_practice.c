#include <stdio.h>
int main()
{

    // C program to check whether it is leap year or not

    int year;

    printf("Enter the year to check if it is leap year or not: \n");
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        printf("%d is leap year", year);
    }

    else if (year % 100 == 0)
    {
        printf("%d is not a leap year", year);
    }

    else if (year % 4 == 0)
    {
        printf("%d is leap year", year);
    }

    else
    {
        printf("%d is not a leap year", year);
    }

    return 0;
}