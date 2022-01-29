#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num, guess, nguesses = 1;
    srand(time(0));
    num = rand() % 100 + 1; //generates random number btw 1 to 100 by this line %100+1 otherwise it give random number from infinity
    // printf("%d", num);

    do
    {
        printf("Please guess the nummber:\n");
        scanf("%d", &guess);

        if (guess > num)
        {
            printf("Lower number plz\n");
        }
        else if (guess < num)
        {
            printf("Please higher number\n");
        }
        else
        {
            printf("You guessed the number in %d attempts\n", nguesses);
        }
        nguesses++;
    } while (guess != num);

    return 0;
}