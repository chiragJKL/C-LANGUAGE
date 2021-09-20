#include <stdio.h>
int main()

{
    int n = 5;

    printf("%d %d %d\n", n, ++n, n++);

    //output is 7 7 5 (not 5 6 6) because gcc compiler runs printf from RIGHT to LEFT

    return 0;
}