#include <stdio.h>
float newtom_second_law(float m, float a, float f);
int main()

// FORCE = MASS x ACCELERATION.
{
    float m, a, f;

    printf("enter mass (in kg) = \n");
    scanf("%f", &m);

    printf("enter accelaration (in kg) = \n");
    scanf("%f", &a);

    printf("force = %.3f", newtom_second_law(m, a, f));

    //"%.3f"---> for answer in 3 decimal

    return 0;
}

float newtom_second_law(float m, float a, float f)
{
    f = (float)m * a;
    return f;
}