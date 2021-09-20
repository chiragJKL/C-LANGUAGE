#include <stdio.h>
int main()

{
    int n, prime = 1;

    //prime=1 means ON and here only "=", while equating its "=="

    printf("enter any number =\n");
    scanf("%d", &n);

    //MISTAKE---> its "i<n" and not "i<=n"
    //take care of loop closing bracket. after closing it use if...else

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        printf("not a prime number\n");
    }

    else
    {
        printf("prime number\n");
    }

    return 0;
}