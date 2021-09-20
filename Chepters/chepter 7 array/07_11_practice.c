//create a function which counts +ve integer of array

#include <stdio.h>
int positive(int *arr, int n, int m)

{
    m = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            m++;
        }

        // else
        // {
        //     m = m;
        // }
    }
    return m;
}

int main()

{
    int num = 5, n = 0;
    int arr[] = {-1, 25, -55, -21, -14};

    positive(arr, num, n);

    printf("answer =%d\n\n", positive(arr, num, n));
    //returm m hence only 1 %d allows whole function's answer

    return 0;
}