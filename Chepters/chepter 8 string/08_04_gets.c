#include <stdio.h>
int main()

{
    char full_name[15];

    printf("enter name= ");
    // scanf("%s", full_name); instead...
    gets(full_name);
    //multi words output
    printf("your name is %s\n", full_name);

    return 0;
}