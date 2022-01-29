#include <stdio.h>
// void array(int *ptr, int n)
// {

//     for (int i = 0; i < 6; i++)
//     {

//         printf("the value of element %d is %d\n", i + 1, *(ptr + i));
//         }
// }

// void array(int ptr[], int n)
// {

//     for (int i = 0; i < 6; i++)
//     {

//         printf("the value of element %d is %d\n", i + 1, *(ptr + i));
//     }
// }

void array(int ptr[], int n)
{

    for (int i = 0; i < 6; i++)
    {

        printf("the value of element %d is %d\n", i + 1, ptr[i]);
    }

    ptr[2] = 65788; //this value will reflect on main fnction too coz we gave it adress not number
}

int main()
{

    int prnt[] = {500, 400, 560, 65, 75, 88};
    array(prnt, 6);

    printf("%d", prnt[2]);

    return 0;
}