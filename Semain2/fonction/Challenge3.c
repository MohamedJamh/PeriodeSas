#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

Bool isPremier(int nbr){
    for(int i = 2; i < nbr ;i++){
        if( nbr % i == 0){
            return False;
        }
    }
    return True;
}

int main()
{
   int nombre;
   printf("Entrer un nombre  :");
   scanf("%d",&nombre);
   if(isPremier(nombre)){
       printf("le nombre %d et premier  :",nombre);
   }else{
       printf("le nombre %d ne pas premier  :",nombre);
   }



}