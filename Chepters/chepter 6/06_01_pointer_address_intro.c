#include <stdio.h>
int main()

{
    int i = 35;
    int *j = &i;
    int **k = &j; //pointer to the pointer!!

    // "*" --->pointer and "&" ---> address
    //it means address of i is stored or points in j

    printf("value of i = %d \n", i);
    printf("value of i = %d \n", *j);

    printf("value of j = %d \n", j);
    printf("value of j = %d \n", *(&j));

    //for address put "%u"

    printf("address of i = %u \n", j);
    printf("address of i = %u \n", &i);
    printf("address of j = %u \n", &j);

    printf("value of k = %u \n", *(&k));
    printf("address of k = %u \n", &k);

    return 0;
}
