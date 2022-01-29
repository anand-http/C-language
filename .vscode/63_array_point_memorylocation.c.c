#include <stdio.h>
int main()
{

    //  C program to check if pointer point in same location in memory or not

    int arr[10];
    // int *ptr = &arr[0]; // this is same as bellow
    int *ptr = arr; //this is same as above

    ptr += 2;

    if (ptr == &arr[2])
    {
        printf("these point to the same location in memory");
    }
    else
    {
        printf("these do not point same location in memory");
    }

    return 0;
}