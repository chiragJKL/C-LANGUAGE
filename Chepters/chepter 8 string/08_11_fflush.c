#include <stdio.h>
// #include <string.h>
int main()

{
    char st1[15];
    char st2[15];
    char c;
    int i = 0;

    printf("input WHOLE string= \n");
    scanf("%s", st1);
    printf("input string CHARACTER BY CHARACTER = \n");

    while (c != '\n')
    {
        fflush(stdin); //to refresh or flush address before next scanf entry
        scanf("%c", &c);
        st2[i] = c;
        i++;
    }
    st2[i] = '\0';

    printf("the value of st1= %s\n", st1);
    printf("the value of st2= %s\n", st2);

    return 0;
}