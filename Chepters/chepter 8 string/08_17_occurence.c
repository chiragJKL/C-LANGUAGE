#include <stdio.h>
int occurence(char st[], char n)
{
    char *ptr = st;
    int count = 0;

    while (*ptr != '\0')
    {
        if (*ptr == n)
        {
            count++;
        }
        ptr++;
    }
    return count;
}

int main()

{
    char st[] = "pranam";
    int o = occurence(st, 'a');

    printf("%d\n", o);

    return 0;
}