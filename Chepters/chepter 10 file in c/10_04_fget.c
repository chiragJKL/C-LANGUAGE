#include <stdio.h>
int main()

{
    FILE *ptr;

    ptr = fopen("getcdemo.txt", "r");

    // char c = fgetc(ptr);

    // printf("value of character c = %c\n", c);
    //will read chirag in the file's first char

    //***fgetc will read file char by char

    printf("value of character c = %c\n", fgetc(ptr));
    printf("value of character c = %c\n", fgetc(ptr));
    printf("value of character c = %c\n", fgetc(ptr));
    printf("value of character c = %c\n", fgetc(ptr));
    printf("value of character c = %c\n", fgetc(ptr));
    printf("value of character c = %c\n", fgetc(ptr));
    printf("value of character c = %c\n", fgetc(ptr));
    printf("value of character c = %c\n", fgetc(ptr));
    printf("value of character c = %c\n", fgetc(ptr));

    fclose(ptr);
    return 0;
}