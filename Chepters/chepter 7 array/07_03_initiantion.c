#include <stdio.h>
int main()

{
    {
        int mark[] = {5, 10, 15}; //{} --> type of bracket

        //instead of scanf we can input easily like this
        //here each array int or float will take 4 byte of memory thats why address of each array have gap of 4

        printf("value of mark[0] = %d\n", mark[0]);
        printf("value of mark[1] = %d\n", mark[1]);
        printf("value of mark[2] = %d\n\n", mark[2]);
    }

    {

        float mark[] = {5.0, 1.0, 1.5};

        printf("value of mark[0] = %f\n", mark[0]);
        printf("value of mark[1] = %f\n", mark[1]);
        printf("value of mark[2] = %f\n", mark[2]);
    }

    return 0;
}