#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int ligne,etoile = 1,espace;
    printf("Entrer un nombre des ligne:");
    scanf("%d",&ligne);
    for(int i = 1; i <= ligne ;i++){
        espace = ligne - i;
        for(int j=1;j<=espace;j++){
            printf(" ");
        }
        for(int k=1;k<=etoile;k++){
            printf("*");
        }
        printf("\n");
        etoile+=2;
    }

}