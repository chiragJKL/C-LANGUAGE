#include <stdio.h>
#include <math.h> //have to include math.h library

int main()

{
    int side;

    printf("Enter Side in Meters = ");
    scanf("%d", &side);

    // pow function is "double" thats why have to use "%f"
    printf("Area of Squre = %f", pow(side, 2));

    return 0;
}