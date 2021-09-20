#include <stdio.h>

int sum(int a, int b); //function prototype declaration
// sum is a function which takes here a and b as input and returns an interger "int" as an output

int main()

{
    int c;
    c = sum(2, 7); //function call
    //probably its like void funcion which move programme to "footnote" but with integer value hence we can assign it a value/ variable. here we have given it c

    //in this programme "a and b" is called---> parameters
    //in this programme "2 and 7" is called---> arguments

    printf("Answer is = %d\n", c);

    return 0;
}

int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;

    // here we can use main() function's variable too. it wont consider as repeatation.
    // int c;
    // c = a + b;
    // return c;
}
