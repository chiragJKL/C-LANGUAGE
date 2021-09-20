#include <stdio.h>

typedef struct date
{
    int date;
    int month;
    int year;
} date;

void display(date d)
{
    printf("%d / %d / %d \n", d.date, d.month, d.year);
}

int compare(date d1, date d2)
{
    if (d1.year > d2.year)
    {
        return 1;
    }
    if (d1.year < d2.year)
    {
        return -1;
    }

    if (d1.month > d2.month)
    {
        return 1;
    }
    if (d1.month < d2.month)
    {
        return -1;
    }

    if (d1.date > d2.date)
    {
        return 1;
    }
    if (d1.date < d2.date)
    {
        return -1;
    }

    return 0;
}

int main()

{
    date a1 = {1, 1, 2020};
    date a2 = {1, 5, 2019};

    display(a1);
    display(a2);

    int a = compare(a1, a2);
    printf("comparison = %d\n", a);

    return 0;
}