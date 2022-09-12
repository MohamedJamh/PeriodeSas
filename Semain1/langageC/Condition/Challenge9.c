#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int day , month , year;
    printf("Entrer la date au format jj\\mm\\aaaa : \n");
    scanf("%d/%d/%d",&day,&month,&year);

    switch(month){
    case 1:
        printf("%d-janvier-%d",day,year);
    case 2:
        printf("%d-fevrier-%d",day,year);
    case 3:
        printf("%d-mars-%d",day,year);
    case 4:
        printf("%d-avril-%d",day,year);
    case 5:
        printf("%d-mai-%d",day,year);
    case 6:
        printf("%d-juin-%d",day,year);
    case 7:
        printf("%d-juillet-%d",day,year);
    case 8:
        printf("%d-aout-%d",day,year);
    case 9:
        printf("%d-septembre-%d",day,year);
    case 10:
        printf("%d-octobre-%d",day,year);
    case 11:
        printf("%d-novombre-%d",day,year);
    case 12:
        printf("%d-decembre-%d",day,year);
    }

}