#include <stdio.h>
#include <stdlib.h>

#include "game.h"

typedef struct T{
    int x;
    int y;
}T;

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
    while(getchar() != '\n');  // Nettoyer le buffer
    if(res != 1 || *a < 1){
        printf("Saisie incorrecte!\n");
        *a = 1;
    }

    return 1;
}

int displayMenu(void){
    printf("Saisissez votre choix: \n");
    printf("1 - Deplacer T \n");
    printf("2 - Quitter \n");

    return 1;
}

int moveT(int rows, int cols, char playground[rows][cols], T *tPosition){
    printf("Saisissez un deplacement par la 1ere lettre [h]aut [b]as [g]auche [d]roite: \n");
    char move = 'B';
    int res = scanf("%c", &move);
    while(getchar() != '\n');
    if(res != 1){
        while(getchar() != '\n');
        printf("Saisie incorrecte!\n");
        return 0;
    }
    switch(move){
        case 'h':
            if(playground[tPosition->y-1][tPosition->x] != 'O'){
                tPosition->y--;
                playground[tPosition->y+1][tPosition->x] = ' ';
                playground[tPosition->y][tPosition->x] = 'T';
            }else{
                printf("Deplacement impossible!\n");
            }
            break;
        case 'b':
            if(playground[tPosition->y+1][tPosition->x] != 'O'){
                tPosition->y++;
                playground[tPosition->y-1][tPosition->x] = ' ';
                playground[tPosition->y][tPosition->x] = 'T';
            }else{
                printf("Deplacement impossible!\n");
            }
            break;
        case 'g':
            
            if(playground[tPosition->y][tPosition->x-1] != 'O'){
                tPosition->x--;
                playground[tPosition->y][tPosition->x+1] = ' ';
                playground[tPosition->y][tPosition->x] = 'T';
            }else{
                printf("Deplacement impossible!\n");
            }
            break;
        case 'd':
            if(playground[tPosition->y][tPosition->x]+1 != 'O'){
                tPosition->x++;
                playground[tPosition->y][tPosition->x-1] = ' ';
                playground[tPosition->y][tPosition->x] = 'T';
            }else{
                printf("Deplacement impossible!\n");
            }
            break;
        default:
            break;

    }
     

    return 1;
}