#include <stdio.h>
struct students
{
    char name[10];
    int code;
    float salary;
};

int main()

{
    struct students a;
    struct students *ptr;
    ptr = &a;

    // (*ptr).code = 101; //take care ita not *(ptr)!!!
    //is same as...
    ptr->code = 111;

    printf("%d\n", (*ptr).code); //is same as
    printf("%d\n", a.code);

    return 0;
}