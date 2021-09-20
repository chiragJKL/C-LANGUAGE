//crearte array of 10 and check (ptr+2) points to third element of array, where ptr points to the first element

#include <stdio.h>
int main()

{
    int arr[10];
    // int *ptr = &arr[0];  OR
    int *ptr = arr;
    ptr = ptr + 2;
    if (ptr == arr[2])
    {
        printf("it points to the same address\n");
    }
    else
    {
        printf("it points to the same address\n");
    }
    return 0;
}