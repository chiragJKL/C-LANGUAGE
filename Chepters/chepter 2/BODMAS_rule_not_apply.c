#include <stdio.h>
int main()

{
    int x = 2, y = 3, z = 3, r = 1;

    // BODMAS dont work in c left to right rule applies
    printf("Sol of 3*x/y-z+r = %d\n", 3 * x / y - z + r);

    return 0;
}