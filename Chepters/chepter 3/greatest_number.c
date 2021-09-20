#include <stdio.h>
int main()

{
    int a, b, c, d;

    printf("enter first number= \n");
    scanf("%d", &a);

    printf("enter second number= \n");
    scanf("%d", &b);

    printf("enter third number= \n");
    scanf("%d", &c);

    printf("enter fourth number= \n");
    scanf("%d", &d);

    if (a > b && a > c && a > d)
    {
        printf("greatest number is = %d\n", a);
    }
    if (b > a && b > c && b > d)
    {
        printf("greatest number is = %d\n", b);
    }
    if (c > b && c > a && c > d)
    {
        printf("greatest number is = %d\n", c);
    }
    if (d > b && d > c && d > a)
    {
        printf("greatest number is = %d\n", d);
    }

    return 0;
}