#include <stdio.h>
int main()

{
    int i = 10;

    // i++ --> pehle print phir convert to +1
    // ++i --> pehle convert to +1 phir print
    // i-- --> pehle print phir convert to -1
    // i+= 5 --> i increase by 5
    // same with '*' and '/'

    printf(" value after i++ = %d\n", i++);
    printf(" value after i = %d\n", i);
    printf(" value after ++i = %d\n", ++i);

    printf(" value after --i = %d\n", --i);

    printf(" value of 'i+= 9' = %d\n", i += 9);

    printf(" value of 'i*= 5' = %d\n", i *= 5);

    printf(" value of 'i/= 5' = %d\n", i /= 5);
    return 0;
}