#include <stdio.h>
int main()

{
    int a = 0;

    // mistake : while (contition is till true means limit)
    // take care of > and < sign

    while (a <= 20)
    {
        if (a >= 10)
        {
            printf("%d\n", a);
        }

        a++;
    }

    return 0;
}