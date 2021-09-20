#include <stdio.h>

typedef struct complex
{
    int real;
    int img;
} cmp;

void display(cmp c)
{

    printf("real = %d\n", c.real);
    printf("img = %d\n", c.img);
}

int main()

{
    cmp nums[5];
    // cmp c; for loop

    for (int i = 0; i < 5; i++)
    {
        printf("enter real number = %d\n", i + 1);
        scanf("%d", &nums[i].real);

        printf("enter img number = %d\n", i + 1);
        scanf("%d", &nums[i].img);
    }

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("real = %d\n", nums[i].real);
    //     printf("img = %d\n", nums[i].img);
    // }

    for (int i = 0; i < 5; i++)
    {
        display(nums[i]);
    }

    return 0;
}