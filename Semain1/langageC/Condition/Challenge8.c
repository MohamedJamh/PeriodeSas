#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
   char car;
   int n;
   printf("donner un charachtere :");
   scanf("%c",&car);
   n = (int) car;
   if((n>=65 && n<=90) ||(n>=90 && n<=122)){
       if(n>=65 && n<=90){
           printf("majuscule");
       }
       else
           printf("minuscule ");
   }
   else{
       printf("enter caracteraire Alphabitique");
   }

}