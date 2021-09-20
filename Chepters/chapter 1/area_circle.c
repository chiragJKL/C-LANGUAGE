#include <stdio.h>
int main()

{
    float rad, aoc;

    printf("enter radius=");
    scanf("%f", &rad);

    aoc = 3.14 * rad * rad;
    printf("AREA OF CIRCLE = %f\n", aoc);

    return 0;
}