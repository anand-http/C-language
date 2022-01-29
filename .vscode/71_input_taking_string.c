#include <stdio.h>
int main()
{

    // C program to take input of array

    char s[50];
    printf("enter your goood name\n");
    // scanf("%s", s);
    gets(s); //use to get spaces between names
    puts(s); //same as gets but it shift cursor in next line
    printf("your name is %s", s);
    return 0;
}