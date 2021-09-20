#include <stdio.h>
int main()

{
    int age;

    printf("Enter Age=\n");
    scanf("%d", &age);

    if (age >= 90)
    {
        printf("YOU ARE SUPER OLD\n");
    }
    else
    {
        printf("YOU ARE JUST OLD!!!!!\n");
    }

    return 0;
}