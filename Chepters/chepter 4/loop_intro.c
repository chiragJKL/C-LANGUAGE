#include <stdio.h>
int main()

{
    int a;

    printf("enter number to start = \n");
    scanf("%d", &a);

    // a=26;
    // while(a>25)---> will be infinite loop thats why while(true condition)

    while (a < 25)
    {
        printf("%d\n", a);
        a++;
    }

    return 0;
}