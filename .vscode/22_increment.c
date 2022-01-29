#include <stdio.h>
int main()
{

    int i;

    scanf("%d", &i);

    while (i > 100)
    {
        printf("%d\n", i);
        i--;
    }

    int i;

    scanf("%d", &i);

    while (i < 20)
    {
        printf("%d\n", i);
        i += 2;
    }

    return 0;
}