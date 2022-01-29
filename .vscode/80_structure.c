#include <stdio.h>
#include <string.h>

// C program to organise data of student using STRUCTURE

struct student
{

    int roll;
    int class;
    char subject[10];
    char name[10];
    char bsdk;
};
int main()
{
    struct student s1;
    s1.roll = 10;
    s1.class = 12;
    s1.bsdk = 'fuck';
    strcpy(s1.subject, "maths");
    strcpy(s1.name, "anand");

    printf("%d\n", s1.roll);
    printf("%s\n", s1.name);
    printf("%c", s1.bsdk);
    return 0;
}