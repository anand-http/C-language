#include <stdio.h>
int main()
{
    FILE *ptr;
    int num;
    int num1;

    ptr = fopen("Harry.txt", "r");
    fscanf(ptr, "%d", &num);
    fscanf(ptr, "%d", &num1);

    printf("The value of num is %d\n ", num);
    printf("The value of num1 is %d \n", num1);
    fclose(ptr);
    return 0;
}