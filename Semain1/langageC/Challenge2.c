#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float F;
    float C;
    printf("entrer la temperateur en Fahrenheit: ");
    scanf("%f",&F);
    C = (F-32)/1.8;
    printf("la temperateur en Celsius est : %f",C);

}