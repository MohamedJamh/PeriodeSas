#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
   int nombre;
   printf("Entrer un nombre :");
   scanf("%d",&nombre);
   int premier = 1;
   for(int i = 2; i < nombre ;i++){
       if( nombre % i == 0){
           premier = 0;
           break;
       }
   }
   if(premier == 1){
       printf("le nombre %d est premier ",nombre);
   }else{
       printf("non Premier");
   }

}