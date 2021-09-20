#include <stdio.h>
struct employee
{
    char name[20];
    int code;
    float salary;
};

int main()

{

    struct employee chirag = {"chirag", 35, 25000};
    //here ordar must be as per struct otherwise error
    //mistake--> chirag[] its not array

    printf("name   = %s \n", chirag.name);
    printf("code   = %d \n", chirag.code);
    printf("salary = %f \n", chirag.salary);

    return 0;
}