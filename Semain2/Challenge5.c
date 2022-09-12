#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    char nombre[50];
    int len;
    printf("Entrer un nombre : ");
    scanf("%s",&nombre);
    //printf("l'inverse est  :%s",strrev(nombre));
    len = strlen(nombre);
    printf("l'inverse est  : ");
    for(int i = 0; i <= len-1; i++){
        printf("%c",nombre[len-1-i]);
    }

}