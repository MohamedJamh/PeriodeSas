#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    char mot[50];
    printf("entrer un mot: \n");
    scanf("%s",&mot);

    int lenght= strlen(mot);
    int indice = 0;
    int pilandrome = 1;

    while(indice < lenght/2){
        if(mot[indice] != mot[lenght-1-indice]){
            pilandrome = 0;
        }
        indice++;
    }

    if( pilandrome == 0 ){
        printf("NonPalindrome");
    }else{
        printf("Palindrome");
    }

}