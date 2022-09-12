#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
   srand(time(0));
   int num = rand() % 7 ;
   switch(num){
       case 0:
           printf("lundi");
           break;
       case 1:
           printf("Mardi");
           break;
       case 2:
           printf("Mercredi");
           break;
       case 3:
           printf("Jeudi");
           break;
       case 4:
           printf("Vendredi");
           break;
       case 5:
           printf("Samedi");
           break;
       case 6:
           printf("Dimanche");
           break;
   }

}