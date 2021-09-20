#include <stdio.h>
int main()

{
    int si, p, r, n;

    printf("premium =");
    scanf("%d", &p);

    printf("rate =");
    scanf("%d", &r);

    printf("years =");
    scanf("%d", &n);

    si = ((p * r * n) / 100);
    printf("SIMEPLE INTEREST = %d\n", si);

    return 0;
}