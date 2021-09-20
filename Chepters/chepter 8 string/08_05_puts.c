#include <stdio.h>

int main()
{
    char name[50];

    printf("Enter your name: ");
    gets(name); //reads string from user

    //INSTEAD OF --> printf("Your name is: %s", name);

    printf("Your name is: ");
    puts(name); //displays string

    return 0;
}