#include <stdio.h>
int main()

{
    FILE *ptr;

    ptr = fopen("putcdemo_new.txt", "w");

    //instead puts--> putc or fputc??
    fputc('x', ptr);
    putc('y', ptr);
    putc('i', ptr);
    putc('r', ptr);
    putc('a', ptr);
    putc('g', ptr);

    return 0;
}