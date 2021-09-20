#include <stdio.h>
int main()

{

    // OR function "||"
    // demografic divident programme

    int age_status;

    printf("Enter Age=\n");
    scanf("%d", &age_status);

    if ((age_status >= 65) || (age_status <= 15))
    {
        printf("SUPPORED!!!!!\n");
    }
    else
    {
        printf("DEMOGRAPHIC DIVIDENT\n");
    }

    return 0;
}