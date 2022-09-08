#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    float A , B;
    printf("entrer les deux valeurs: \n");
    scanf("%f",&A);
    scanf("%f",&B);

    if( (A <= B) ){
        printf("permutation impossible !");
    }else{
        A = A + B;
        B = A - B;
        A = A - B;
        printf("la valeur de A: %.2f \n",A);
        printf("la valeur de B: %.2f \n",B);
    }

}