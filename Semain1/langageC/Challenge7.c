#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n1 , n2 , n3 , n4;
    printf("entrer les deux nombre \n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    scanf("%f",&n4);
    float somme = n1 + n2 + n3 + n4;
    printf("la somme est : %.2f \n",somme);
    printf("la moyenne est : %.2f \n",somme/4);

}