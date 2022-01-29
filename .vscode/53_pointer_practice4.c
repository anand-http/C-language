#include <stdio.h>
void sumavg(int a, int b, int *sum, float *avg)
{

    *sum = a + b;
    *avg = (float)(*sum) / 2;
}

int main()
{

    int x = 15, y = 20, sum;
    float avg;

    sumavg(x, y, &sum, &avg);

    printf("the sum of x and y is %d\n", sum);

    printf("the avarage of x and y is %f\n", avg);

    return 0;
}