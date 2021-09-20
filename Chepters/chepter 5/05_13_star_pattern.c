#include <stdio.h>
void stars(int n);
int main()

{
    int n;

    printf("enter line num =\n");
    scanf("%d", &n);

    stars(n);

    return 0;
}

void stars(int n)
{
    if (n == 1)
    {
        printf("*\n");
        return;
    }

    stars(n - 1);
    //function calling itself = recursion

    for (int i = 0; i < (2 * n - 1); i++)
    {
        printf("*");
    }
    printf("\n");
}
