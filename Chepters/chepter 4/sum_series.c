#include <stdio.h>
int main()

{
    int i = 1, sum = 0, n = 10;

    // for(i=1;i<=n;i++)
    // sum += i;

    // while (i <= n)
    // {
    //     sum += i; //means sum= sum + i
    //     i++;
    // }

    do
    {
        sum += i;
        i++;

    } while (i <= n);

    printf("sum of first 10 number= %d\n", sum);

    return 0;
}