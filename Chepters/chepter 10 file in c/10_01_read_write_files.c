#include <stdio.h>
int main()

{
    FILE *ptr;
    int n1;
    int n2;

    // ptr = fopen("created in c.txt", "w");

    ptr = fopen("yoyo.txt", "r");
    //"r" : read files
    //"rb" : read binary files
    //"w" : write files
    //"wb" : write binary files
    //"a" : add append (like concatenate)

    fscanf(ptr, "%d", &n1); //*****fSCANF
    fscanf(ptr, "%d", &n2); //*****fSCANF

    fclose(ptr); //to close the opened file

    printf("number from other file is = %d %d\n", n1, n2);

    return 0;
}