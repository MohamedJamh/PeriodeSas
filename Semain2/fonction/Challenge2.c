#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int echanger(int Ai,int Bi,int *Ae, int *Be){
   int swap;
   //phase permutation
   swap = Ai;
   Ai = Bi;
   Bi = swap;
   //phase de retour
   *Ae = Ai;
   *Be = Bi;
}


int main()
{
   int Ai , Bi , Ae,Be;
   printf("entrer deux valeur A et B:");
   scanf("%d",&Ai);
   scanf("%d",&Bi);
   printf("les valeur initial de A : %d  B : %d",Ai,Bi);
   echanger(Ai,Bi,&Ae,&Be);
   printf("apres l'echange valeur de A : %d  B : %d",Ae,Be);



}