#include <stdio.h>
void change_it_five_times(int *i);
int main()

{
    // change it to five times

    int a = 5;
    printf("value =%d\n", a);

    change_it_five_times(&a);
    printf("new value =%d\n", a);

    return 0;
}

void change_it_five_times(int *i)
{
    int multiplier;
    multiplier = *i;
    (*i) = multiplier * 5;
}
