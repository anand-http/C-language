#include <stdio.h>
int main()
{

    // WRITE A PROGRAM TO DETERMINE A NO.IS DIVISIBLE BY 97 OR not
    int num;

    printf("Please enter the no. to check it`s divisible by 97 or not\n");
    scanf("%d", &num);

    printf("divisibilty test return: %d\n", num % 97);
    printf("if it returns 0 then it is divisible by 97 otherwise it`s not");

    return 0;
}