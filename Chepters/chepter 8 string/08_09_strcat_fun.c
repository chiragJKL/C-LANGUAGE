#include <stdio.h>
#include <string.h>

int main()

{
    //***strcat--> string concatenate, to join two words

    char string1[] = "chi";
    char string2[] = "rag";

    strcat(string1, string2);
    //order is imp. 1st will be come first also changed

    //output : string1 will be "chirag"

    printf("now string 1 is = %s\n\n", string1);

    strcat(string2, string1);

    printf("now string 2 is = %s\n\n", string2);
    //output : string2 will be [str2 = rag] &[str1 = chirag] hence [ragchirag]

    return 0;
}