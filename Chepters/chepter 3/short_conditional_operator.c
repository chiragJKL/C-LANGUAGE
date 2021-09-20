#include <stdio.h>
int main()

{
    int a;

    printf("enter num \n");
    scanf("%d", &a);

    // ONE LINER CONDITION
    // MISTAKES : take care of brackets and semicolones

    (a < 100) ? printf("ur num is double digit\n") : printf("ur num is NOT double digit\n");

    return 0;
}