#include <stdio.h>
int main()

{
    int age, nationality;

    printf("Enter Age=\n");
    scanf("%d", &age);

    printf("Press 1 if your nationality is Indian =\n");
    scanf("%d", &nationality);

    if ((age >= 21) && (nationality == 1))
    {
        printf("YOU CAN VOTE IN LOKSABHA\n");
    }
    else
    {
        printf("YOU CAN'T VOTE\n");
    }

    return 0;
}