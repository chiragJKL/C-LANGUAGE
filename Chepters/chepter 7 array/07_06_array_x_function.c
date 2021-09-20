#include <stdio.h>

//**PASSING ARRAY TO FUNCTION**

// void print_array(int *ptr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("the value of %d is %d\n", i + 1, *(ptr + i));
//         // *(ptr+i) for value of ptr + multi of 4 as per the loop
//     }

void print_array(int ptr[], int n)
//ptr[] is same as *ptr, int n to limit for loop

//FUNCTION PROTOTYPE :
//1. void print_array(int *ptr, int n) OR
//2.void print_array(int ptr[], int n)

{
    for (int i = 0; i < n; i++)
    {
        printf("the value of %d is %d\n", i + 1, ptr[i]);
        //ptr[i] is same as *(ptr + 1)

        ptr[2] = 55555555;
        //here it will change in main() too because its pointer.
        //ptr[] is same as *ptr to understand it better
    }
}

int main()

{
    // int arr[] = {12, 55, 4, 544, 6565};
    // print_array(arr, 5);
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        printf("enter num = \n");
        scanf("%d", &arr[i]);
    }

    print_array(arr, 5);
    // FUNCTION CALL : print_array(arr, n);

    //here 5 is the size of array to limit "for loop" of the funcion

    return 0;
}
