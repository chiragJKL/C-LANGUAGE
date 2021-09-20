#include <stdio.h>

struct database
{
    char name[10];
    int code;
    float salary;
};

int main()

{
    struct database a1, a2, a3;

    printf("enter name = \n");
    scanf("%s", a1.name);

    printf("enter code = \n");
    scanf("%d", &a1.code);

    printf("enter salary = \n");
    scanf("%f", &a1.salary);

    printf("enter name = \n");
    scanf("%s", a2.name);

    printf("enter code = \n");
    scanf("%d", &a2.code);

    printf("enter salary = \n");
    scanf("%f", &a2.salary);

    printf("enter name = \n");
    scanf("%s", a3.name);

    printf("enter code = \n");
    scanf("%d", &a3.code);

    printf("enter salary = \n");
    scanf("%f", &a3.salary);

    return 0;
}