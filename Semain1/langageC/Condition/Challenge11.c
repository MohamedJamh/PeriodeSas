#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
   int hh,hh2,mm2,ss2,mm,ss;

   scanf("%d:%d:%d",&hh,&mm,&ss);
   scanf("%d:%d:%d",&hh2,&mm2,&ss2);

   if(hh2 < hh ){
       printf("le premier instant vient avant le deuxième;");
   }else if(hh < hh2){
       printf("Le deuxième instant vient avant le premier");
   }else{
       if(mm2 < mm ){
           printf("le premier instant vient avant le deuxième;");
       }else if(mm < mm2){
           printf("Le deuxième instant vient avant le premier");
       }else{
           if(ss2 < ss ){
               printf("le premier instant vient avant le deuxième;");
           }else if(ss < ss2){
               printf("Le deuxième instant vient avant le premier");
           }else{
               printf("Il s'agit du même instant");
           }
       }
   }

}