#include <stdio.h>
int main()

{
    int i = 1, n, a;

    printf("Table of = \n");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    // reverse table ----> for (int i = 10; i; i--)
    {
        a = i * n;
        printf("%d x %d = %d\n", n, i, a);
    }

    return 0;
}