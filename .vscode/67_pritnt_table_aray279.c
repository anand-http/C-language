#include <stdio.h>
// c program to print the table of 2,7,9
void print_table(int *table, int num, int n)
{
    printf("the mulltiplication table of %d\n", num);
    for (int i = 0; i < n; i++)
    {
        table[i] = num * (i + 1);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%dx%d=%d\n\n", num, i + 1, table[i]);
    }
    printf("\n\n\n\n\n");
}
int main()
{
    int table[1][10];
    int num;
    scanf("%d", &num);
    print_table(table[0], num, 10);

    return 0;
}