#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int A , B;
    printf("entrer les deux valeurs: \n");
    scanf("%d",&A);
    scanf("%d",&B);
    int somme = A + B;
    if( A == B ){
        int triple = somme*3;
        printf("la somme est : %d",triple);

    }else{
        printf("la somme est : %d",somme);
    }

}