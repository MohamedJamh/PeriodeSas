#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int n=0,p=-1,res = 1 ;
    printf("Entrer un nombre n : ");
    scanf("%d",&n);
    printf("a la puissance : ");
    scanf("%d",&p);
    while( 0 < p){
        res = n*res;
        p--;
    }
    printf("resultat : %d",res);


}