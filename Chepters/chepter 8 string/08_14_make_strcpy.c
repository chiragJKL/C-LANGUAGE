#include <stdio.h>
char *string_copy(char *target, char *source)
{

    if (target == NULL)
    {
        return NULL;
    }
    char *temp = target;

    while (*source != '\0')
    {

        *target = *source;
        target++;
        source++;
    }
    // *target = '\0';
    return temp;
}
int main()

{
    char *source = "THIS";
    char target[25];

    string_copy(target, source);

    printf("now target is = %s\n", string_copy(target, source));

    return 0;
}