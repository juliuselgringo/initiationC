#include <stdio.h>

// commentaire
/*
commmentaires
etc...
*/

/**
 * Fonction principale
 * @param void
 * @return int
 */
int main(void){

    // Declaration variable
    int aireDuCarre;

    // Affectation
    aireDuCarre = 12;

    float prix = 99.99;
    signed char something = 120;
    signed char otherthing = 'A';

    aireDuCarre = 33;

    int prix_entier = (int)prix;



    /*
        %d : nombre entier (int)
        %f : nombre flottant (float)
        %c : caractère (char)
        %s : chaine de caracteres
    */
    printf("%d\n", prix_entier);
    printf("Le prix arrondit a l entier inferieur est: %d\n", prix_entier);
    printf("Le prix est %f et l aire du carre est %d\n", prix, aireDuCarre);
    printf("Le prix est %.2f (.2f permet d'afficher 2 chiffre apres la virgule) et l aire du carre est %d\n", prix, aireDuCarre);

    // creation de constante (par convention on écrit les constantes en majuscule)
    const float PI = 3.14;
    const int NOMBRE = 123;

    printf("PI est egal a : %.2f", PI);

    // Inutile actuellement mais pour la culture
    // memoire en registre donc tres rapide (car memoire du processeur)
    register int nb = 5;
    // surtout ne pas stocker en registre
    volatile int nb2 = 10;


    return 0;
}

