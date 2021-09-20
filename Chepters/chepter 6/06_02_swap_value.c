#include <stdio.h>
void swap(int *a, int *b);
int main()

{
    // fow swap or changing value operation we have use pointers and address

    int x = 3, y = 5;
    printf("before swap = %d , %d\n", x, y);

    // call by referrence (&x ,&y)

    swap(&x, &y);
    printf("aftre swap = %d, %d\n", x, y);

    return 0;
}

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    //new int first time get value from left to right--> temp will get a's value
    *a = *b;
    // already defined int get value from right to left--> b will get a's value
    *b = temp;
    // already defined int get value from right to left--> b will get temp's value
    //thus value of a and b will get interchange
}