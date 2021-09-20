#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{

    int random_number, guess, nguess = 1;

    srand(time(0));
    random_number = rand() % 100 + 1;
    //so that only computer know the number---> HIDE printf("%d\n", random_number);

    do
    {

        printf("guess any number betweem 1 to 100 =\n");
        scanf("%d", &guess);

        if (random_number > guess)
        {
            printf("HIGHER number please!\n");
        }

        else if (random_number < guess)
        {
            printf("LOWER number please!\n");
        }

        else
        {
            printf("bingo!\n");
        }

        nguess++;

    } while (random_number != guess); //condition to loop it further not stop hence not (random_number == guess)

    printf("congrats!! you guessed it in %d attemts!\n", nguess);

    return 0;
}
