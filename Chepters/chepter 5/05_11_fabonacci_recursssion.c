#include <stdio.h>
int fabonacci(int n);
int main()

{

    // VERY COMPLEX

    int num, n = 0; //n=0 because fabonnaci starts from 0
    printf("enter terms= \n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) //for iteration loop
    {
        printf("%d\n", fabonacci(n)); //here in main() we can also use m instead of n too. can use any variable.
        n++;
    }

    return 0;
}

int fabonacci(int n)
{
    if (n == 0 || n == 1) //for first 2 iteration
    {
        return n;
    }
    else
    {
        return fabonacci(n - 1) + fabonacci(n - 2);
        //0,1,1,2,3,5,8,13,21...
        //function is calling itself so it's "recursion"
        //nth term equation in fabonnaci
    }
}
