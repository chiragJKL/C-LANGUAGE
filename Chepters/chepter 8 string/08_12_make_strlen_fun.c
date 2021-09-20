#include <stdio.h>
int strlen(char *string)
{
    char *ptr = string;
    int count = 0; //MISTAKE : count=0

    while (*ptr != '\0')
    {
        count++;
        ptr++;
    }

    return count;
}

int main()

{
    char st[] = "chirag";

    int l = strlen(st); //int l because we want integer in ouput

    printf("num of latters are = %d\n", l);

    return 0;
}