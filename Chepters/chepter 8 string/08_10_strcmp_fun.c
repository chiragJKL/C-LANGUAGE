#include <stdio.h>
#include <string.h>

int main()

{
    //***strcmp---> string compare. to know latter is up or down in ASCII chart

    char string1[45] = "chirag";
    char *string2 = "chi4ag";

    // here it will compare "chirag" & "chi4ag"
    // where it will compare 1st non common latter.
    // here "chi" is same so it will compare "r" & "4"

    int value = strcmp(string1, string2);

    // strcmp(string1, string2) hence [ASCII of "r" - ASCII of "4"]
    // if +ve = output will be "1"
    // if -ve = output will be "-1"
    // if same = output will be "0"

    printf("now the value is = %d\n\n", value);

    return 0;
}