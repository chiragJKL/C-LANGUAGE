#include <stdio.h>
int factorial(int num);

int main()

{
    int num = 5;
    printf("The value of factorial %d is %d \n", num, factorial(num));

    return 0;
}
// The C programming language supports recursion...
// i.e., a function to call itself.
// But while using recursion, programmers need to be careful to define an exit condition from the function, otherwise it will go into an infinite loop.
// bolow is code for recurssion. its like a loop. heve a limiited use.

int factorial(int num)
{
    printf("calling factorial (%d)\n", num); //just to see what its calling in steps, Useful cause recurssion can become infine by mistake
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1); //here function is calling itself
    }
}
