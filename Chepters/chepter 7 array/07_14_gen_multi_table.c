

// ******INCOMPLETE********

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

    return 0;
}

int main()

{
    int j, n, i = 0;
    //array[3][10] means 3x10 size but this size starts with 0
    //hence below code is till arr_size[2] !!!

    //[3]---> for table of 2, 7, 9
    //[10]--> for table upto x10

    int arr_size[100][100];

    printf("enter table = ");
    scanf("%d", &n);

    printf("enter upto what = \n");
    scanf("%d", &j);

    multitable(arr_size[i], n, j);
    //**** hint probably

    // while (c != '\n')
    //     {
    //         fflush(stdin); //to refresh or flush address before next scanf entry
    //         scanf("%c", &c);
    //         st2[i] = c;
    //         i++;
    //     }
    //     st2[i] = '\0';

    // for (int i = 0; i < j; i++)
    // {
    //     fflush(stdin);
    //     scanf("%d", &j);
    // }

    // for (int r = 0; r <= num[10]; r++)
    // {
    //     multitable(arr_size[r], num[10], n);
    // }

    return 0;
}
