#include <stdio.h>
int main()

{

    //***strcpy() --> to copy string in second string from first string

    char *source = "THIS";
    char target[15]; //[ ] --> to make space for the string

    strcpy(target, source); //***PROTOTYPE---> "strcpy" function prototype

    printf("now target is = %s\n", target);

    return 0;
}