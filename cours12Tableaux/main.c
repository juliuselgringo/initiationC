#include <stdio.h>

/*
    DECLARATION:
    int array[7];

    DECLARATION ET INITIALISATION:
    int array[5] = {0} // toute les valeurs du tableau sont déclaré à 0;
    int array[5] = {4} // seul la première case est égal à 4 le reste est à 0;

    ACCES AU TABLEAU:
    tableau[x] => élt d'indice x
    tableau => adresse du tableau
    *tableau => valeur du premier élt du tableau
    *(tableau + x) => élt d'indice x => tableau[3] = *(tableau + 3)


*/

#define TAILLE 9

int displayArray(int tab[], int lengthTab);

int *arrayInit();

int displayMatrice(int matrice[][2], int row, int col);

int main(void){
    int tableau[TAILLE] = {0};

    tableau[1] = 99;

    displayArray(tableau, TAILLE);

    printf("\n");
    printf("\n");//___imprimer______

    int array[5] = {16, 4, -5, 22, 188};

    displayArray(array, 5);

    printf("\n");
    printf("\n");//___recuperer depuis un fct____

    int *newArray = arrayInit();
    displayArray(newArray, 3);

    printf("\n");
    printf("\n");//___matrice___________

    int matrice[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    displayMatrice(matrice,3,2);


    return 0;
}

int displayArray(int tab[], int lengthTab){
    for(int i = 0; i < lengthTab; i++){
        printf("[%d] ", tab[i]);
    }

    return 0;
}

int *arrayInit(){
    static int newArray[3];

    for(int i = 0; i < 3; i++){
        newArray[i] = i * 3;
    }
    return newArray;
}

int displayMatrice(int matrice[][2], int row, int col){
    for (int i = 0; i<row; i++){
        printf("[");
        for (int j = 0; j<col; j++){
            printf("[%d] ", matrice[i][j]);
        }
        printf("]\n");
    }
    return 0;
}