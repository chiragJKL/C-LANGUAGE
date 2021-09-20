#include <stdio.h>
void sum_and_avg(int a, int b, int *sum, float *avg);

int main()

{
    int x, y, sum;
    float avg;

    printf("enter first num = \n");
    scanf("%d", &x);

    printf("enter second num = \n");
    scanf("%d", &y);

    sum_and_avg(x, y, &sum, &avg);

    printf("sum= %d\n", sum);
    printf("avg= %f\n", avg);

    return 0;
}

void sum_and_avg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)*sum / 2;
}
