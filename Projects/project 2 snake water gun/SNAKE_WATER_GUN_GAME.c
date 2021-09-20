#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(char u, char com)
//s,w,g //return 1=win, -1=lose, 0=draw
{
    if (u == com)
    {
        return 0;
    }

    else if (u == 's' && com == 'w')
    {
        return 1;
    }
    else if (u == 'w' && com == 's')
    {
        return -1;
    }

    else if (u == 'g' && com == 's')
    {
        return 1;
    }
    else if (u == 's' && com == 'g')
    {
        return -1;
    }

    else if (u == 'w' && com == 'g')
    {
        return 1;
    }
    else if (u == 'g' && com == 'w')
    {
        return -1;
    }
}

int main()

{
    char you, computer;

    int random_number;

    srand(time(0));
    random_number = rand() % 3 + 1;

    if (random_number == 1)
    {
        computer = 's';
    }

    if (random_number == 2)
    {
        computer = 'w';
    }

    if (random_number == 3)
    {
        computer = 'g';
    }

    printf("choose snake, water or gun = ");
    scanf("%c", &you);

    int a = game(you, computer);

    printf("\n\nYou choose = %c & computer choose  = %c\n", you, computer);

    if (a == 1)
    {
        printf("congratss YOU WON !!!\n\n");
    }
    else if (a == -1)
    {
        printf("YOU LOSE !!!\n\n");
    }
    else
    {
        printf("draw \n\n");
    }

    return 0;
}