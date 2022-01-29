// #include <stdio.h>
// void encrypt(char *c)
// {
//     // encrypt msg

//     char *ptr = c;
//     while (*ptr != '\0')
//     {
//         *ptr = *ptr + 1;
//         ptr++;
//     }
// }
// int main()
// {

//     char c[] = "hello mr bsdk room no.6 me khajana rakha hua hai";
//     encrypt(c);
//     printf("encrypt string is : %s", c);

//     return 0;
// }

// decrypt msg

#include <stdio.h>
void decrypt(char *c)
{

    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}
int main()
{

    char c[] = "ifmmp!ns!ctel!sppn!op/7!nf!libkbob!sblib!ivb!ibj";
    decrypt(c);
    printf("encrypt string is : %s", c);

    return 0;
}