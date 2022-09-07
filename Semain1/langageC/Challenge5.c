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
    printf("la temperateur en Celsius est : %f \n",C);
    printf(" \t STATUS: ");
    if( C <= 0 ){
        printf("Tres Froid");
    }else if( C < 21 ){
        printf("Froid");
    }else if( C < 45 ){
        printf("Chaud");
    }else{
        printf("Tres Chaud");
    }

}