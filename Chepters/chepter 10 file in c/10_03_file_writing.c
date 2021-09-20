#include <stdio.h>
int main()

{
    FILE *ptr;
    int n = 100;

    ptr = fopen("I wrote this file in c.txt", "w");

    //***fPRINTF : to write file from c
    fprintf(ptr, "The number is = %d\n", n);
    fclose(ptr);

    return 0;
}