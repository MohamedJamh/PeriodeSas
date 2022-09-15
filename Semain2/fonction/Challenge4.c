#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

Bool dividedby(int a,int b){
    if( a % b == 0)
        return False;
    return True;
}

int main()
{
   int a,b = 1;
   while( b == 0 || b == 1 || b == a){
       printf("Entrer deux nombre a et b :");
       scanf("%d",&a);
       scanf("%d",&b);
   }

   if(dividedby(a,b)){
       printf("le nombre %d est premier",a);
   }else{
       printf("le nombre %d ne pas premier",a);
   }



}