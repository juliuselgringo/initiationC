#include <stdio.h>

int main(void){
    /*
        + add
        - sous
        * mult
        / div
        % modulo
    */

    int nb1 = 6;
    int nb2 = 4;
    int add = nb1 + nb2;
    int mult = nb1 * nb2;
    printf("Le resultat de l addition est %d.\n", add);
    printf("Le resultat de la multiplication est %d.\n", mult);
    
    int playerLevel = -1;
    printf("Choisissez votre niveau de depart: \n");
    scanf("%d", &playerLevel);
    printf("Le joueur a gagner de l'experience.\n" );
    playerLevel++; // ou playerLevel += 1;
    printf("Votre nouveau niveau est %d", playerLevel);

    return 0;
}