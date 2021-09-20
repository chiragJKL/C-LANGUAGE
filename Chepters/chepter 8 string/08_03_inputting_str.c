#include <stdio.h>
int main()

{
    char a[15]; //to researve size

    printf("enter your name= ");
    scanf("%s", a); //here array doesn't require %
    //***scanf cant be used to input multi words i.e. akshay kumar.
    // to use space or multi words use "gets()"

    printf("your name is %s\n", a);

    return 0;
}