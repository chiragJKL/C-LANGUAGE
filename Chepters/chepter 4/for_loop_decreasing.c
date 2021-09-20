#include <stdio.h>
int main()

{
    for (int i = 5; i; i--)
    // loop below "0" or "-ve"------> for (int i = 5; i>(-5); i--)
    {
        printf("%d\n", i);
    }

    return 0;
}