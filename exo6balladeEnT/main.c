#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "game.h"

/*
    pas d'allocation dynamique
    string autorisés

    OOOO
    O TO
    O  O
    OOOO

    espace de jeu de A * B cases
    Tableau [Ax2][Bx2]

*/



int main(void){

    // Saisie et gestion des erreurs de saisie
    int a = 0;
    scanNumber(&a);
    int b = 0;
    scanNumber(&b);
    
    int rows = a + 2;
    int cols = b + 2;

    // Création du tableau
    char playground[rows][cols];

    // Initialiser tout le tableau avec des espaces
    for(int i = 0; i < (rows); i++){
        for(int j = 0; j < (cols); j++){
            playground[i][j] = ' ';
        }
    }

    // Remplir les bordures avec 'O'
    for(int i = 0; i < (rows); i++){
        playground[i][0] = 'O';      // Première colonne
        playground[i][cols-1] = 'O';    // Dernière colonne
    }

    for(int j = 0; j < (cols); j++){
        playground[0][j] = 'O';      // Première ligne
        playground[rows-1][j] = 'O';    // Dernière ligne
    }

    // Initialiser T
    playground[1][1] = 'T';
    T tPosition = {1,1};

    // Affichage du tableau
    displayPlayground(rows, cols, playground);

    // Deplacer T dans le playground
    int start = 1;
    while(start){
        displayMenu();
        int choice = 0;
        scanNumber(&choice);
        switch (choice){
        case 1:
            moveT(rows, cols, playground,&tPosition);
            displayPlayground(rows, cols, playground);
            break;
        case 2:
            exit(1);
            break;
        default:
            printf("Erreur de saisie!");
            break;
        }
        
    }
    

    return 1;
}