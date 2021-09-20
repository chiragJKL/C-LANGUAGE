#include <stdio.h>
int main()

{
    int mark[5]; //mark[0] mark[1] mark[2] mark[3] mark[4] mark[5]

    for (int i = 0; i <= 4; i++)
    //for (int i = 0; i < 5; i++) can be used also.
    {
        printf("enter mark %d = ", i + 1);
        //i+5 --> just to start numbers with 1 and not 0

        scanf("%d", &mark[i]);
        //MISTAKE---> mark[i] is right ; mark[5] is wrong
        //here scanf will run from mark[1] so mark[0] will remain empty and loop limit i<=4 hence i will run from 0 to 4= 5 times
    }

    for (int i = 0; i <= 4; i++)
    {
        printf("output mark %d = %d \n", i + 1, mark[i]);
        //second loop will take values scaned from first loop
    }

    return 0;
}