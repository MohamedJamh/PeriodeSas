#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int nombre = 0 , max = 0  , somme = 0;
    do{
        if(max < nombre){
            max = nombre;
        }
        somme += nombre;
        printf("Entrer un nombre :");
        scanf("%d",&nombre);
    }while(nombre > 0 && nombre < 100);
    printf("la somme des nombres est : %d \nle maximum est: %d",somme,max);

}