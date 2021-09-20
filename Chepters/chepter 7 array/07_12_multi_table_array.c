#include <stdio.h>

int main()

{
    int arr[3][10]; //this programme does not require [3] & possible by one dimentionally

    printf("\nTABLE OF 2 : \n\n");
    for (int i = 0; i < 10; i++)
    {
        arr[0][i] = 2 * (i + 1);
        printf("%d x %d = %d\n", 2, (i + 1), arr[0][i]);
    }

    printf("\nTABLE OF 7 : \n\n");
    for (int i = 0; i < 10; i++)
    {
        arr[0][i] = 7 * (i + 1);
        printf("%d x %d = %d\n", 7, (i + 1), arr[0][i]);
    }

    printf("\nTABLE OF 9 : \n\n");
    for (int i = 0; i < 10; i++)
    {
        arr[0][i] = 9 * (i + 1);
        printf("%d x %d = %d\n", 9, (i + 1), arr[0][i]);
    }

    return 0;
}
