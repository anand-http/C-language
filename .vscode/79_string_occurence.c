#include <stdio.h>
int occurence(char st[], char c)
{

    //C program to get the occurence of strig

    char *ptr = st;
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            count++;
        }
        ptr++;
    }
    return count;
}
int main()
{
    char st[] = "hello";
    int count = occurence(st, 'l');
    printf("occurence=%d", count);

    return 0;
}