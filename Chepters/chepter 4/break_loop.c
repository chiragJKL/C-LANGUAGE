#include <stdio.h>
int main()

{
    int i = 1;

    do
    {
        printf("%d\n", i);

        if (i == 15)
            break;

        i++;
    } while (i < 100);

    return 0;
}