#include <stdio.h>
int main()

{
    int i = 1, n, a, sum = 0;

    printf("enter num = \n");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        a = n * i;
        printf("%d x %d = %d\n", n, i, a);
        sum += a;
    }

    printf("SUM of all multiplication =%d\n", sum);

    return 0;
}