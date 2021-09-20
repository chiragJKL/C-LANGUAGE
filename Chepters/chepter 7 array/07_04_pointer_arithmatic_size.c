#include <stdio.h>
int main()

{
    {

        int a; //we running just address thats why vaule is optional for this programme
        int *ptr = &a;

        printf("address of a = %u\n", ptr);

        // int and float pointer will be in gap of 4 because it takes that much memory (4 bytes)
        // alphabates or string will take only 1 byte

        ptr++;         // means +4
        ptr = ptr + 1; //same as ptr++ means +4
        ptr--;
        ptr = ptr - 1; //means -4
        ptr = ptr + 2; //means +8. it will be as per ptr  not common numbers.

        printf("new address = %u\n\n", ptr);
    }

    {

        char x;
        char *y = &x;
        // here in char or alphabates it will take only 1 byte
        printf("address of a = %u\n", y);

        y++;

        printf("new address = %u\n", y);
    }

        return 0;
}