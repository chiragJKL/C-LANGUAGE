// create 2 dimentional vector

#include <stdio.h>
struct vector
{
    int x;
    int y;
};

struct vector sum_of_vector(struct vector v1, struct vector v2)
{
    struct vector sum;
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    return sum;
}

int main()

{
    struct vector v1, v2, sum;
    v1.x = 50;
    v1.y = 100;

    printf("Vector 1 | dim of x= %d, y= %d \n", v1.x, v1.y);

    v2.x = 2500;
    v2.y = 3000;

    printf("Vector 1 | dim of x= %d, y= %d \n", v2.x, v2.y);

    sum = sum_of_vector(v1, v2);
    printf("Sum of vector x= %d, y= %d \n", sum.x, sum.y);
    return 0;
}