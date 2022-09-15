#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int add(int a, int b){
   int resultat;
   resultat = a + b;
   return resultat;
}


int main()
{
   int A , B , res;
   printf("entrer deux valeur A et B:");
   scanf("%d",&A);
   scanf("%d",&B);

   res = add(A,B);
   printf("resultat est: %d",res);



}