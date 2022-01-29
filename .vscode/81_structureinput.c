#include <stdio.h>

// C program to take input of detail of three students in Structure

struct students
{
    char name[10];
    int class;
    int roll;
};

int main()
{
    struct students s1, s2, s3;

    printf("enter the name of student s1\n");
    scanf("%s", s1.name);
    printf("enter the class of student s1\n");
    scanf("%d", &s1.class);
    printf("enter the roll no. of student s1\n");
    scanf("%d", &s1.roll);

    printf("\n\n");

    printf("enter the name of student s2\n");
    scanf("%s", s2.name);
    printf("enter the class of student s2\n");

    scanf("%d", &s2.class);
    printf("enter the roll no. of student s2\n");
    scanf("%d", &s2.roll);

    printf("\n\n");
    printf("enter the name of student s3\n");
    scanf("%s", s3.name);
    printf("enter the class of student s3\n");
    scanf("%d", &s3.class);
    printf("enter the roll no. of student s3\n");
    scanf("%d", &s3.roll);

    printf("\n\n");

    printf("%s\n", s1.name);
    printf("%d\n", s1.class);
    printf("%d\n", s1.roll);

    printf("\n\n");

    printf("%s\n", s2.name);
    printf("%d\n", s2.class);
    printf("%d\n", s2.roll);

    printf("\n\n");

    printf("%s\n", s3.name);
    printf("%d\n", s3.class);
    printf("%d\n", s3.roll);

    printf("\n\n");

    return 0;
}