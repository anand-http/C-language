#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int snakewatergun(char you, char comp)
{
    // game draw
    if (you == comp)
    {
        return 0;
    }

    // not draw

    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }

    if (you == 'w' && comp == 'g')
    {
        return 1;
    }
    else if (you == 'g' && comp == 'w')
    {
        return -1;
    }

    if (you == 'g' && comp == 's')
    {
        return 1;
    }
    else if (you == 's' && comp == 'g')
    {
        return -1;
    }
}

int main()
{
    int number;
    char you, comp;
    srand(time(0));
    number = rand() % 100 + 1;
    if (number < 33)
    {
        comp = 's';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g'; 
    }
    printf("enter what you choose for snake s orfor water w or for gun g\n");
    scanf(
        "%c", &you);

    int result = snakewatergun(you, comp);

    printf("you choose %c and computer choose %c\n", you, comp);
    if (result == 0)
    {
        printf("Game draw\n");
    }
    else if (result == 1)
    {
        printf("You win the game\n");
    }
    else
    {
        printf("You loose the game\n");
    }

    return 0;
}