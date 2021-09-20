#include <stdio.h>
int main()

{
    // WRONG PROGRAMME SOME ERROR DONT KNOW WHY

    double rate = 0, income, tax;

    printf("enter income= \n");
    scanf("%lf", &income);

    tax = rate * (income);

    if (income >= 250000 && income < 500000)
    {
        rate = rate + 0.05 * (income - 250000);
        printf("%lf\n", tax);
    }

    if (income >= 500000 && income < 1000000)
    {
        rate = rate + 0.10 * (income - 250000);
    }

    if (income >= 1000000)
    {
        rate = rate + 0.20 * (income - 250000);
    }

    printf("YOU HAVE PAY =%lf AS TAX TO THE GOVERNMENT.\n", &tax);

    return 0;
}