#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int a, i;
    printf("Entrer un nombre :");
    scanf("%d",&a);
    if( a != 0){
        i = 0;
        do{
            printf("%d x %d = %d \n",a,i,a*i);
            i++;
        }while(i<=10);
    }else{
        printf("really ! haha");
    }

}