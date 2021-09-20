#include <stdio.h>
float temp(float c, float f);

int main()

{
    float c, f;

    printf("enter celcius =\n");
    scanf("%f", &c);

    printf("fahrenheit  =%f\n", temp(c, f));

    return 0;
}

float temp(float c, float f)
{
    f = (float)(c * 1.8) + 32;
    return f;
}

// #include <stdio.h>

// int main()

// // (0°C × 9/5) + 32 = 32°F

// {
//     float c, f;

//     printf("enter temp in celsius =\n");
//     scanf("%f", &c);

//     f = (c * 1.8) + 32;

//     printf("ferenhit = %f", f);

//     return 0;
// }