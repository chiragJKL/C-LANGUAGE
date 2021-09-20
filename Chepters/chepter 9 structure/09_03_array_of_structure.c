#include <stdio.h>
#include <string.h>
struct employee

{
    char name[10];
    int code;
    float salary;
};

int main()

{
    struct employee facebook[100];
    //here facebook is just variable or sub-structure and employee is structure

    strcpy(facebook[0].name, "chirag");
    facebook[0].code = 101;
    facebook[0].salary = 25000;

    strcpy(facebook[1].name, "mahesh");
    facebook[1].code = 102;
    facebook[1].salary = 30000;

    strcpy(facebook[2].name, "priyank");
    facebook[2].code = 103;
    facebook[2].salary = 35000;

    printf("done\n");

    return 0;
}