#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char Nom[10] , Prenom[10] , Sexe[10];
    int Age;
    printf("Entrer Les Information Suivant:\nNom , Prenom , Age , Sex . Un Par un. \n");
    scanf("%[^\n]%*c",&Nom);
    scanf("%[^\n]%*c",&Prenom);
    scanf("%[^\n]%*c",&Sexe);
    scanf("%d",&Age);
    printf("Votre Nom: %s\n",Nom);
    printf("Votre Prenom: %s\n",Prenom);
    printf("Votre Sexe: %s\n",Sexe);
    printf("Votre Age: %d\n",Age);

}