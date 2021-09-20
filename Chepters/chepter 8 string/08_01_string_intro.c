#include <stdio.h>
int main()

{
    char string[] = {'c', 'h', 'i', 'r', 'a', 'g', '\0'};
    // char string[] = {"chirag"}; is the same
    char *ptr = string;
    // char ptr[] = string; is the same

    printf("\n");

    //intro method to learn concept

    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++; //string made up of individual character!!
    }

    printf("\n\n");

    return 0;
}