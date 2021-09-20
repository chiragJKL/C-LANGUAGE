#include <stdio.h>
int main()

{
    int a;
    int *b = &a;
    int **c = &b;

    printf("value of c= %u\n", c);
    printf("value of c= %u\n", *c);  //1 time * will give value of b
    printf("value of c= %u\n", **c); //2 time ** will give value of a

    printf("value of c= %u\n", a);

    printf("value of c= %u\n", b);

    return 0;
}