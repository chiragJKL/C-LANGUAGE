#include <stdio.h>
int main()

{
    int a = 2;
    int *b = &a;
    int c = &b;

    // %u is required when we want address

    printf("value of a=%d\n\n", a);
    printf("address of a by '&a'=%d\n", &a);
    printf("address of a by 'b'=%d\n\n\n", b);
    printf("TTTTaddress of a by 'b'=%u\n\n", b);

    printf("value of b by 'b'=%d\n", b);
    printf("TTTTvalue of b by 'b'=%u\n", *b);

    printf("address of b by '&b'=%d\n", &b);
    printf("value of c=%d\n\n", c);

    // printf("value of =%d\n", *a);
    printf("value of *b =%d\n\n", *b);
    printf("value of *&a =%d\n\n", *&a);
    // printf("value of *c =%d\n\n", *c);
    return 0;
}