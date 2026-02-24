#include <stdio.h>
#include <stdlib.h>

int sumOfIntBetween(int a, int b){
    int sum = 0;
    int max = (a>b) ? a : b;
    int min = (a>b) ? b : a;
    for(int i = min; i <= max; i++){
        sum += i;
    }

    return sum;
}

int main(void){
    int a = 0;
    int b = 0;

    printf("Saisissez un premier entier: \n");
    scanf("%d", &a);
    
    printf("Saisissez un 2eme entier: \n");
    scanf("%d", &b);

    if(a < 1 || b < 1){
        printf("Les valeurs ne peuvent etre inferieur a 1. \n");
        exit(1);
    }else if(a > 1000 || b > 1000){
        printf("Les valeurs ne peuvent etre superieur a 1000. \n");
        exit(1);
    }

    int sum = sumOfIntBetween(a, b);

    printf("La somme des nombre entre ces deux chiffres est : %d \n", sum);

    return 0;
}