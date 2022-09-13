#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    float nbr= 0, somme = 0 ,max = 10;
    printf("Entrer dix valeur posiftif \n",somme);
    for(int i=1;i<=max;i++){
        scanf("%f",&nbr);
        if(nbr > 0){
            somme += nbr;
        }else{
            printf("\nvaleur negatif no valide\n");
            max++;
        }
    }
    printf("la somme des nombres est :%.2f",somme);



}