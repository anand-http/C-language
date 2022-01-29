#include <stdio.h>

void display(int m, int n, int arr[m][n])
{

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = i + j;
        }
    }
}
int main()
{

    int m = 5, n = 5;
    int arr[5][5];

    display(m, n, arr);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}