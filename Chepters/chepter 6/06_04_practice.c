#include <stdio.h>
int main()

{
    int a = 5;
    int *ptr;
    ptr = &a;

    printf("address of a = %u\n", ptr);
    printf("value of a = %d\n", *ptr);

    return 0;
}