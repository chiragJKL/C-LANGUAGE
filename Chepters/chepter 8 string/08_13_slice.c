#include <stdio.h>
void slice(char *string, int m, int n)
{
    int i = 0;

    while ((m + i) < n)
    {
        string[i] = string[i + m];
        i++;
    }

    (string[i] = '\0');
}

int main()

{
    char string[] = "chiragjkl";
    slice(string, 1, 6);

    printf("\n%s\n\n", string);

    return 0;
}