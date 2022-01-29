#include <stdio.h>
int main()
{
    // CALCULATE SIMPLE INTREST

    int p, r, t;

    printf("enter the principal value\n");
    scanf("%d", &p);
    printf("enter the rate of interest\n");
    scanf("%d", &r);
    printf("enter the time in year\n");
    scanf("%d", &t);

    printf("the simple interest is %d", (p * r * t) / 100);

    return 0;
}