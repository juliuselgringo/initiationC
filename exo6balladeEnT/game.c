#include <stdio.h>
#include <stdlib.h>

#include "game.h"

int displayPlayground(int rows, int cols, char playground[rows][cols]){
    for(int i = 0; i < (rows); i++){
        for(int j = 0; j < (cols); j++){
            printf("[%c]", playground[i][j]);
        }
        printf("\n");
    }

    return 1;
}

int scanNumber(int *a){
    printf("Saisissez un nombre entier: \n");
    int res = scanf("%d", a);
    if(res != 1 || *a < 1){
        while(getchar() != '\n');
        printf("Saisie incorrecte!\n");
        *a = 1;
    }

    return 1;
}