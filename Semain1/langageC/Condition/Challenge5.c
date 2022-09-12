#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
   float a, b, c, Delta, x1, x2, x3;
   printf("entrer les valeur a b c :");
   scanf("%f",&a);
   scanf("%f",&b);
   scanf("%f",&c);
   Delta = pow(b,2)-4*a*c;

   printf("%f",Delta);
   if( Delta > 0){
       x1 = (-b-sqrt(Delta))/2*a;
       x2 = (-b+sqrt(Delta))/2*a;

       printf("solution est : %f et %f",x1,x2);
   }else if(Delta == 0){
       x3 = (-b)/2*a;
       printf("solution est : %f ",x1);
   }else{
       printf("no solution");
   }

}