#include <stdio.h>
float avg(int a, int b, int c);

int main()

{
    int a, b, c;

    printf("Enter first number= \n");
    scanf("%d", &a);

    printf("Enter second number= \n");
    scanf("%d", &b);

    printf("Enter third number= \n");
    scanf("%d", &c);

    printf("Average = %f\n", avg(a, b, c));
    return 0;
}

float avg(int a, int b, int c)
{
    float result;
    result = (float)(a + b + c) / 3; //have to add "typecast"--> (float)

    return result;
}
