#include <stdio.h>
int main()
{

    // C program to  find the grade of students by taking input from his or her marks
    int marks;
    printf("Enter the marks you got out of 100\n");
    scanf("%d", &marks);

    switch (marks / 10)
    {
    case 10:
    case 9:
        printf("your grade is A");
        break;
    case 8:
        printf("your grade is B");
        break;
    case 7:
        printf("your grade is C");
        break;
    case 6:
        printf("your grade is D");
        break;
    default:
        printf("your grade is F");
        break;
    }

    return 0;
}