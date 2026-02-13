#include <stdio.h>

/*
    pointeur: variable contenant l adresse d une autre variable

    %p insérer une adresse dans un printf

    variable = valeur de la variable
    &variable = adresse de la variable

    *pointeur = pointe la valeur à l'adresse de la variable = &variable

*/

int inverser(int *poineurA,int *pointeurB){
    
    int tampon = *poineurA;
    *poineurA = *pointeurB;
    *pointeurB = tampon;
        
    return 0;
}

int main(void){
    int nbA = 100;
    printf("Adresse de la variable nbA: %p\n", &nbA);
    int nbB = 50;

    printf("AVANT : A = %d et B = %d\n", nbA, nbB);
    inverser(&nbA,&nbB);
    printf("APRES : A = %d et B = %d\n", nbA, nbB);

    return 0;
}