#include <stdio.h>
int main()
{

    // CONDITIONAL OPERATOR
    int a;
    printf("enter the no.");
    scanf("%d", &a);

    (a > 5) ? printf("%d is greater than 5", a) : printf("%d is less than 5", a);

    return 0;
}