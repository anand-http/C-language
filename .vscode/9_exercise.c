#include <stdio.h>
int main()
{
    // EXERCISE

    //int a; b=a; this is not valid
    int a;
    int b = a; //this is valid

    int v = 3 ^ 3; //this is valid but not print 9
    printf("%d", v);

    // char dt = '21 11'; this is invalid only one character can we write
    char dt = '2'; //this is valid

    // what datatype it will return (3.0/8)-2;
    // it will return float or double , if int ND FLOAT two datatypes then that return float

    return 0;
}