//create table of 5 using array of 10

#include <stdio.h>
int main()

{
    int mul[10], n;

    printf("enter number = \n");
    scanf("%d", &n);

    for (int i = 0; i < 10; i++)
    {
        mul[i] = n * (i + 1);
        printf(" %d X %d = %d\n", n, i + 1, mul[i]);
    }

        return 0;
}