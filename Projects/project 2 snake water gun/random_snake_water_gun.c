#include <stdio.h>
#include <stdlib.h> //for RANDOM NUMBER function
#include <time.h>   //for diff random number every time

int main()

{

    int random_number;

    srand(time(0));
    // for every time its generate different RANDOM NUMBER

    random_number = rand() % 3 + 1;
    // for limit random number to 0 to 100

    printf("%d\n", random_number);

    return 0;
}
