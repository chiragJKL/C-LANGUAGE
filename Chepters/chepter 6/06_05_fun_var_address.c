#include <stdio.h>
void function(int a)
{
    printf("address of a= %u\n", &a);
}
int main()

{
    int i = 4;
    // here in output variable and function both will have different address

    printf("address of i =%u\n", i);
    function(i);
    printf("address of i using function a= %u\n", &i);

    return 0;
}