#include <stdio.h>
int main()

{
    //INSTEAD OF int mark1, mark2, mark3, mark4;

    int mark[3];
    // c programme like most other languege starts with 0
    // thats why mark[3] will be mark0, mark1, mark2, mark3

    printf("enter 1= \n");
    scanf("%d", &mark[0]);

    printf("enter 2= \n");
    scanf("%d", &mark[1]);

    printf("enter 3= \n");
    scanf("%d", &mark[2]);

    printf("enter 4= \n");
    scanf("%d", &mark[3]);

    printf("values are %d %d %d and %d\n", mark[0], mark[1], mark[2], mark[3]);

    //here have to write all saperately, to avoid that we can use "for loop"
    return 0;
}