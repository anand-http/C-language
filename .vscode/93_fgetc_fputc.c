#include <stdio.h>
int main()
{
    // fgetc is a function we use to read charcter by charcter in files
    /*FILE *ptr;

    ptr = fopen("fgetc.txt", "r");

    printf("the value of my character is %c\n", fgetc(ptr));
    printf("the value of my character is %c\n", fgetc(ptr));
    printf("the value of my character is %c\n", fgetc(ptr));
    printf("the value of my character is %c\n", fgetc(ptr));
    printf("the value of my character is %c\n", fgetc(ptr));*/

    // fputc is a function used for writing charcter by charcter in file

    FILE *ptr;

    ptr = fopen("fputc.txt", "w");

    putc('h', ptr);
    putc('e', ptr);
    putc('l', ptr);
    putc('l', ptr);
    putc('o', ptr);

    return 0;
}