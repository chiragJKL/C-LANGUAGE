#include <stdio.h>
#include <string.h> //***********************
int main()

{
    // *****strlen()---> string length
    //DONT FORGET TO USE "<string.h>" otherwise programme wont run

    char *length = "chirag";
    int a = strlen(length); //***PROTOTYPE-->here "strlen" is a funtion.

    printf("letters in your word is = %d\n\n", a); //%d --> for lenght in numbers

    return 0;
}