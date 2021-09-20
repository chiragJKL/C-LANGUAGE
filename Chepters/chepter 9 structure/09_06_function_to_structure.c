#include <stdio.h>
#include <string.h>

struct students
{
    char name[20];
    int code;
    float marks;
};

void show(struct students result) // Mistake : struct students VARIABLE
{
    printf("Name = %s\n", result.name);
    printf("Code = %d\n", result.code);
    printf("Marks = %f\n", result.marks);
    result.marks = 50; //to test change
}

int main()

{
    struct students a;
    struct students *ptr;

    ptr = &a;

    strcpy(ptr->name, "chirag");
    ptr->code = 35;
    ptr->marks = 74.98;

    show(a);

    printf("new marks = %f\n", a.marks);
    //****value of struct won't change like array

    return 0;
}