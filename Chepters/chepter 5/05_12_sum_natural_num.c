#include <stdio.h>
int sum(int a);
int main()

{
    int num;

    printf("enter terms =\n");
    scanf("%d", &num);

    printf("sum of terms:  ");
    printf(" is = %d\n", sum(num));

    return 0;
}

int sum(int a)
{
    if (a != 0)
    {
        printf(" %d ", a);
        return a + sum(a - 1);
    }

    else
    {
        return a;
    }
}
