#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float kilometre ;
    float mile ;
    printf("entrer la distance en kilometre: ");
    scanf("%f",&kilometre);
    mile = kilometre * 0.621;
    printf("conversion en mile : %f",mile);

}