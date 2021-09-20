#include <stdio.h>
int main()

{
    for (char i = 65; i < 91; i++)
    {
        printf("%c\n", i);
        // printf("%c\n", i+1); to skip A and add ASCII number after z which is "["
    }

    return 0;
}