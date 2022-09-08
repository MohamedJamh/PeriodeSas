#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    float note;
    printf("entrer la note d'eleve: \n");
    scanf("%f",&note);
    if( note < 10 ){
        printf("recale");
    }else if( (10 <= note) && (note < 12) ){
        printf("Passable");
    }else if( 12 <= note && note < 14 ){
        printf("Assez bien");
    }else if( 14 <= note && note < 16 ){
        printf("bien");
    }else{
        printf("Tres bien");
    }

}