#include <stdio.h>
void char_finder(char word[], char c)
{
    char *ptr = word;

    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            printf("yes\n");
            break;
        }
        else
        {
            printf("no\n");
            break;
        }
    }
}
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
    char word[] = "chiragc";

    char_finder(word, 'c');

    int o = occurence(word, 'c');

    printf("%d\n", o);

    return 0;
}