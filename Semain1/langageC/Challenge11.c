#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float longeur , largeur , circoference;
    printf("entrer la longeur : ");
    scanf("%f",&longeur);
    printf("entrer la largeur : ");
    scanf("%f",&largeur);
    circoference  = (longeur + largeur) *2;
    printf("circoference est : %.2f",circoference);

}