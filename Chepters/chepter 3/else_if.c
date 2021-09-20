#include <stdio.h>
int main()

{
    int age, nationality;

    printf("Enter Age=\n");
    scanf("%d", &age);

    if (age > 21)
    {
        printf("YOU CAN VOTE IN LOKSABHA\n");
    }
    else if (age == 21)
    {
        printf("APPLY FOR VOTING CARD ASAP\n");
    }
    else
    {
        printf("YOU CAN'T VOTE\n");
    }

    return 0;
}