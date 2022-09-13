#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
   int niem;
   scanf("%d",&niem);
   int suit[niem+1];
   suit[0] = 0;
   suit[1] = 1;
   for(int i = 2;i<=niem;i++){
       suit[i] = suit[i-2] + suit[i-1];
   }
   printf("la valeur est : %d\n",suit[niem]);



}