#include <stdio.h>
int main()
{
    FILE *ptr;

    ptr = fopen("generate.txt", "w");
    fprintf(ptr, "hello madarchod duniya kaisi hai aap");

    return 0;
}