//reverse array

#include <stdio.h>
void reverse(int *arr, int n)
{
    for (int i = 0; i < (n / 2); i++)
    {
        int temp;
        // arr[0]=arr[5-0-1]  "-1" because array starts from 0 hence 1 less required
        // arr[1]=arr[5-1-1]
        // arr[i] = arr[n - i - 1];

        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
        //changing value operarion like we did before
    }
}

int main()

{

    int arr[] = {1, 2, 3, 4, 5};
    reverse(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("value of %d = %d\n", i, arr[i]);
    }

    return 0;
}