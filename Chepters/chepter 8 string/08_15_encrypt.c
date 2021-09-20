#include <stdio.h>

void encrypt(char *x)
{
    char *ptr = x;

    while (*ptr != '\0')

    {
        *ptr = *ptr + 1; //this increament for encryption
        ptr++;           //is same as "*ptr++;" here
        //this one is for to move to next char
    }
}
int main()

{
    char name[] = "chirag";

    encrypt(name);

    printf("%s\n", name);

    return 0;
}