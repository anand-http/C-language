#include <stdio.h>
int main()
{
    // int i = 1;
    // // break
    // while (i < 10)
    // {
    //     printf("%d", i);
    //     i++;
    //     break;
    // }

    // CONTINUE
    int skip = 5;
    int i = 0;
    while (i < 10)
    {
        i++;
        if (i != skip)
            continue;
        else
        {
            printf("%d", i);
        }
    }
    return 0;
}