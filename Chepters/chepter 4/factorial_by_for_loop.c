#include <stdio.h>
int main()

{
    int i, n, f = 1;

    printf("enter num = \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        f *= i; // n = n * i
    }
    // for (int i = n - 1; i; i--)
    // {
    //     n *= i; // n = n * i
    // }

    printf("factorial = %d\n", f);
    return 0;
}