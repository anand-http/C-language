#include <stdio.h>
int main()
{
    // C program to Check whether the student is paas in PCM or not by taking input of his or her marks

    int P, C, M;
    float total;
    printf("enter the marks you get in Physics");
    scanf("%d", &P);
    printf("enter the marks you get in Chemistry");
    scanf("%d", &C);
    printf("enter the marks you get in Maths");
    scanf("%d", &M);
    total = (P + C + M) / 3;
    if ((total < 40) || P < 33 || C < 33 || M < 33)

    {
        printf("your percentage is %f and you are fail\n", total);
    }
    else
    {
        printf("your percentage is %f and you are pass\n", total);
    }
    return 0;
}