

// ***Struture in C ***
// ...is a collaction of variables of different types under a single name

// Structure makes data more organised and easily managed

#include <stdio.h>
#include <string.h>

struct employee //"struct" is defined. (not just a name)
{
    char name[10];
    int code;
    float salary;
};

int main()

{
    struct employee e1;

    strcpy(e1.name, "chirag");
    //e1.name = "chirag"; //WON'T WORK
    e1.code = 001;
    e1.salary = 25000;

    printf("%s\n", e1.name);
    printf("%d\n", e1.code);
    printf("%0.2f\n", e1.salary);

    //it will store in continues memory location at 4 gap like ptr

    return 0;
}