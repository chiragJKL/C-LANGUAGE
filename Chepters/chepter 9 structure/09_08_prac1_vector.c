// create 2 dimentional vector

#include <stdio.h>
struct vector
{
    int x;
    int y;
};

int main()

{
    struct vector v1, v2;
    v1.x = 50;
    v1.y = 100;

    printf("Vector 1 | dim of x= %d, y= %d \n", v1.x, v1.y);

    v2.x = 2500;
    v2.y = 3000;

    printf("Vector 1 | dim of x= %d, y= %d \n", v2.x, v2.y);

    return 0;
}