#include <stdio.h>
int main()

{
    FILE *ptr;

    ptr = fopen("putcdemo.txt", "r");

    char a = fgetc(ptr);

    printf("\n");

    while (a != EOF) //EOF = End OF File
    {
        printf("%c", a);
        a = fgetc(ptr);
    }
    printf("\n\n");

    return 0;
}