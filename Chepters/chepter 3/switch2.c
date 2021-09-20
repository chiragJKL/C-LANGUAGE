#include <stdio.h>
int main()

{
    int choose;

    printf("press 1 or 2\n");
    printf("Enter your option =\n");
    scanf("%d", &choose);

    // switch only works for some specific case and choise

    switch (choose)
    {
    case 1:
        printf("welcome to first option\n");
        break;

    case 2:
        printf("welcome to second option\n");
        break;

    default:
        printf("invalid choice\n");
    }

    return 0;
}