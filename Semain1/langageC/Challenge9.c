#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int Mx , My , Nx , Ny ;
    printf("Entrer les xoordonnees suivant \n");
    printf("Mx : ");
    scanf("%d",&Mx);
    printf("My : ");
    scanf("%d",&My);
    printf("Nx : ");
    scanf("%d",&Nx);
    printf("Ny : ");
    scanf("%d",&Ny);
    float distance = sqrt( pow((Nx - Mx),2) + pow((Ny - My),2) );
    printf("la distance entre point M et N est : %.2f",distance);

}