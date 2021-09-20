#include <stdio.h>
void change(int a); //take care here its "void change" not "int chnange" like in "int sum(int a, int b)"
int main()

//here value WON'T change in void function.
// but apperently it makes copy of it we will about it in future
// to change it we will learn "pointer" in future

{
    int a = 344;
    printf("The value of a before change =%d\n", a);

    change(a);

    printf("The value of a after change =%d\n", a);

    return 0;
}

void change(int a)
{
    a = 77;
}