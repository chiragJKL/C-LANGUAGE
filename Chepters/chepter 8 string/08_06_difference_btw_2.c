#include <stdio.h>
int main()

{
    char *ptr = "chirag";
    //this def will allow [ptr="mahesh"] in the memory location

    // ****char ptr[]= "chirag";****
    // array will not accpet

    ptr = "mahesh\n\n";
    puts(ptr); //is same as...
    // printf("%s", ptr);

    return 0;
}