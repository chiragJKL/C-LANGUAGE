#include <stdio.h>
void multitable(int arr[], int num, int n)
{
    printf("\nTABLE OF %d : \n\n", num);
    for (int i = 0; i < n; i++)
    {
        arr[i] = num * (i + 1);
        //arr[i] represents table up to i loop allows means n
        printf("%d x %d = %d\n", num, (i + 1), arr[i]);
    }
    printf("\n************\n");
}

int main()

{
    int arr_size[3][10];
    //array[3][10] means 3x10 size but this size starts with 0
    //hence below code is till arr_size[2] !!!

    //[3]---> for table of 2, 7, 9
    //[10]--> for table upto x10

    multitable(arr_size[0], 2, 10);
    multitable(arr_size[1], 7, 10);
    multitable(arr_size[2], 9, 10);

    return 0;
}
