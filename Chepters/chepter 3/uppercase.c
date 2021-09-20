#include <stdio.h>
int main()

{
    char alphabate;

    // ASCII CODE for Capital Alphabates are 65-90

    printf("enter alphabate = \n");
    scanf("%c", &alphabate);

    if (alphabate >= 65 && alphabate <= 90)
    {
        printf("UPPERCASE");
    }

    else
    {
        printf("LOWERCASE");
    }

    return 0;
}