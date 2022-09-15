#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void bubbleSort(int taille){
    char swap;
    char numbers[taille];
    printf("Entrer les nombre : \n");
    for(int i = 0;i<= taille-1;i++){
        scanf("%d",&numbers[i]);
    }
    for(int i = 0;i<= strlen(numbers)-1;i++){
        for(int j = 0;j<= strlen(numbers)-1;j++){
            if( numbers[i] < numbers[j]){
                swap = numbers[j];
                numbers[j] = numbers[i];
                numbers[i] = swap;
                continue;
            }
        }
    }
    for(int i = 0;i<= strlen(numbers)-1;i++){
        printf("%d",numbers[i]);
    }
}

int main()
{
   int taille ;
   printf("Combien de nombre : \n");
   scanf("%d",&taille);

   bubbleSort(taille);



}