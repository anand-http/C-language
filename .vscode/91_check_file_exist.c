#include <stdio.h>
int main()
{
    FILE *ptr;
    int a;
    int b;
    ptr = fopen("hello.txt", "r");
    if (ptr == NULL)
    {
        printf("File doesnot exist");
    }
    else
    {
        fscanf(ptr, "%d", &a);
        fscanf(ptr, "%d", &b);
        printf("The value of a is : %d\n", a);
        printf("The value of b is : %d", b);
    }
    return 0;
}