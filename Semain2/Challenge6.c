#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
   int n, p,i,premier = 1;
   printf("Entrer un nombre n : ");
   scanf("%d",&n);
   printf("les nombre premier dans l'interval 2 -> %d : \n",p);
   for(p = 2; p < n ;p++){
       int div = 0;
       for(int i = 1; i <= p ;i++){
           if( p % i == 0){
               div++;
           }
       }
       if(div == 2){
           printf("premier : %d\n",p);
       }
   }



}