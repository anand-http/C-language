#include <stdio.h>
int main()
{
    FILE *ptr;
    int num;
    printf("enter the no. of which table you want\n");
    scanf("%d", &num);

    ptr = fopen("table.txt", "w");
    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr, "%d x %d = %d\n", num, i + 1, num * (i + 1));
    }
    fclose(ptr);
    printf("The multiplication table of %d is generated in file", num);
    return 0;
}