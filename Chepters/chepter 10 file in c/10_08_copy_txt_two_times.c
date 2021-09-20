#include <stdio.h>
int main()

{
    FILE *ptr1;
    FILE *ptr2;

    ptr1 = fopen("a.txt", "r");
    ptr2 = fopen("b.txt", "w");

    char a = fgetc(ptr1);

    while (a != EOF)
    {
        fputc(a, ptr2);
        fputc(a, ptr2);

        a = fgetc(ptr1);
    }

    fclose(ptr1);
    fclose(ptr2);

    return 0;
}
