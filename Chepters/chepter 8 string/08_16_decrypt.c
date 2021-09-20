#include <stdio.h>

void decrypt(char *x)
{
    char *ptr = x;

    while (*ptr != '\0')

    {
        *ptr = *ptr - 1; //decrease as oppose to encrypt
        ptr++;
    }
}
int main()

{
    char name[] = "dijsbh";

    decrypt(name);

    printf("%s\n", name);

    return 0;
}