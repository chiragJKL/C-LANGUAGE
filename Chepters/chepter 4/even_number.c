#include <stdio.h>
int main()

{
    int i = 0, n;

    // for odd number loop take i=1

    printf("enter number =\n");
    scanf("%d", &n);

    // do while loop ----> use to run loop ATLEAST 1 time
    // use ";" after WHILE in DO_WHILE_LOOP

    do
    {
        printf("number is = %d\n", i);
        i = i + 2;
    } while (i <= n);

    return 0;
}