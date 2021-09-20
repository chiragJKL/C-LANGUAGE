#include <stdio.h>
#include <string.h>

typedef struct students //****typedef ..> to give nickname to struct
{
    char name[20];
    int code;
    float marks;
} std;

void show(std result)
{
    printf("Name = %s\n", result.name);
    printf("Code = %d\n", result.code);
    printf("Marks = %f\n", result.marks);
}

int main()

{
    // INSTEAD OF...
    // struct students a;
    // struct students *ptr;
    // write..

    std a;
    std *ptr;

    ptr = &a;

    strcpy(ptr->name, "chirag");
    ptr->code = 35;
    ptr->marks = 74.98;

    show(a);

    return 0;
}