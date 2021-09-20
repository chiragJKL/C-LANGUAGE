#include <stdio.h>
int main()

{
    float maths, english, history, percentage;

    printf("Enter marks of MATHS =\n");
    scanf("%f", &maths);

    printf("Enter marks of ENGLISH=\n");
    scanf("%f", &english);

    printf("Enter marks of HISTORY=\n");
    scanf("%f", &history);

    percentage = ((maths + english + history) / 3);
    printf("percentage = %f\n", percentage);

    // MISTAKES : take care of brackets and "else if"

    if ((percentage > 75) && (maths >= 33 && english >= 33 && history >= 33))
    {
        printf("YOUR GRADE IS A \n");
    }
    else if (((percentage > 50) && (percentage <= 75)) && (maths >= 33 && english >= 33 && history >= 33))
    {
        printf("YOUR GRADE IS B\n");
    }
    else if (((percentage > 35) && (percentage <= 50)) && (maths >= 33 && english >= 33 && history >= 33))
    {
        printf("YOUR GRADE IS C\n");
    }

    else
    {
        printf("FAILED\n");
    }

    return 0;
}