#include <stdio.h>
#include "numbers.h"

int greetingsWorld(void){
    printf("\nHello World!!!\n");

    return 1;
}

int displayMenu(void){
    printf("\nSaisissez le chiffre de votre choix:\n");
    printf("1 - addition:\n");
    printf("2 - soustraction:\n");
    printf("3 - multiplication:\n");
    printf("4 - division:\n");
    printf("0 - QUITTER\n");

    return 1;
}

float scanNumber(void){
    printf("Saissez un nombre: \n");
    float a = 0.00;
    int result = scanf("%f", &a);
    
    // Vider le buffer si scanf a échoué
    if(result != 1){
        while(getchar() != '\n');
        printf("Saisie incorrecte retourne 1 \n");
        return 1.00;
    }
    
    if(a >= -1000 && a <= 1000){
        return a;
    }else {
        printf("Saisie incorrecte retourne 1 \n");
        return 1.00;
    }
    
}

int addFct(void){
    float a = scanNumber();
    float b = scanNumber();
    printf("La somme %.2f + %.2f est egal a %.2f \n", a, b, a + b);
    return 1;
}

int subFct(void){
    float a = scanNumber();
    float b = scanNumber();
    printf("La soustraction %.2f - %.2f est egal a %.2f \n", a, b, a - b);
    return 1;
}

int multFct(void){
    float a = scanNumber();
    float b = scanNumber();
    printf("La multiplication %.2f * %.2f est egal a %.2f \n", a, b, a * b);
    return 1;
}

int divFct(void){
    float a = scanNumber();
    float b = scanNumber();
    if(b != 0){
        printf("La division %.2f / %.2f est egal a %.2f \n", a, b, a / b);
    }else{
        printf("Le denominateur ne peut-etre egal a 0.");
    }
    return 1;
}