#include <stdio.h>
int main()
{

    int a = 10;
    printf("enter a no.");
    scanf("%d", &a);

    // if (a = 11) // this will not print i am not 11 bcoz == sign is used to show equality in c
    // {
    //     printf("i am 11");
    // }
    // else
    // {

    //     printf("i am not 11");
    // }

    //this is correct

    if (a == 11)
    {
        printf("i am 11");
    }
    else
    {

        printf("i am not 11");
    }

    return 0;
}