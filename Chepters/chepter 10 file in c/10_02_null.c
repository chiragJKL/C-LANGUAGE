#include <stdio.h>
int main()

{
    FILE *ptr;
    int n1;
    int n2;

    ptr = fopen("y3oyo.txt", "r");

    if (ptr == NULL) //NULL in capital = 0 or no value
    {
        printf("file doesn't exist\n");
    }
    else
    {

        fscanf(ptr, "%d", &n1); //*****fSCANF
        fscanf(ptr, "%d", &n2); //*****fSCANF

        fclose(ptr); //to close the opened file

        printf("number from other file is = %d %d\n", n1, n2);
    }

    return 0;
}