#include <stdio.h>
int main()

{
    FILE *ptr;
    int n;

    printf("enter table of = ");
    scanf("%d", &n);

    ptr = fopen("multi table.txt", "w");

    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr, "%d X %d = %d\n", n, i + 1, n * (i + 1));
        //MISTAKE : after fscanf and fprintf (ptr,...,...)
        //but it wont start with ptr in fopen
    }

    fclose(ptr);

    printf("successfully done!!\n\n");

    return 0;
}