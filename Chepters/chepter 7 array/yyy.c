#include <stdio.h>

int main()

{
    int arr[10];

    printf("\nTABLE OF 2 : \n\n");
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 2 * (i + 1);
        printf("%d x %d = %d\n", 2, (i + 1), arr[i]);
    }

    printf("\nTABLE OF 7 : \n\n");
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 7 * (i + 1);
        printf("%d x %d = %d\n", 7, (i + 1), arr[i]);
    }

    printf("\nTABLE OF 9 : \n\n");
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 9 * (i + 1);
        printf("%d x %d = %d\n", 9, (i + 1), arr[i]);
    }

    return 0;
}
