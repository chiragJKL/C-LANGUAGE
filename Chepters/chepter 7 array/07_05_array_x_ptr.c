#include <stdio.h>
int main()

{
    int a[4];
    int *ptr;
    // ptr = &a[0]; and
    ptr = a; //both are same!!!!!!!!!!!! means pointer automatically take array 0 with address.

    for (int i = 0; i < 4; i++)
    {
        printf("marks of student %d = \n", i + 1);
        scanf("%d", ptr); //MISTAKE---> here DON'T put "& ptr", ptr is defined address look at line 7 of this programme
        ptr++;
        //here value is being taken fron its address not directly!! 'ptr++' gives +4 so programme is more complex and smart then its seems,  thats just amazing!!!
    }
    for (int i = 0; i < 4; i++)
    {
        printf("marks of student %d is %d \n", i + 1, a[i]);
    }

    return 0;
}