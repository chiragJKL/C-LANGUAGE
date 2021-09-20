#include <stdio.h>
int main()

{
    int i, n;

    printf("enter num =\n");
    scanf("%d", &n);

    // for loop bracket should be as given below.
    // for(initilize ; test ; increment)

    for (int i = 0; i <= n; i++)
    {

        printf("%d\n", i);
    }

    return 0;
}