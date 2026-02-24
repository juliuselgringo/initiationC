#include <stdio.h>
#include <stdlib.h>


/*
    sizeof(<donnee>) : retourne la taille en octets d une donnee
    malloc(<taille_octets>) : alloue dynamiquement une zone memoire
    free(<donnee_allouee>) : libere la memoire allouee dynamiquement

    calloc(<donnee>, <taille_octets>) : alloue et initialise tout à 0
    realloc(<donnee>, <nouvelle_taille>) : realloue un espace memoire
*/

int main(void){
    int playerNbr = 0;
    int *playerList = NULL;

    printf("Nombre de joueur? : \n");
    scanf("%d", &playerNbr);

    playerList = malloc(playerNbr * sizeof(int));

    if(playerList == NULL){
        exit(1);
    }

    
    for(int i = 0; i < playerNbr; i++){
        printf("Joueur %d -> numero %d\n", i+1, i*3);
        playerList[i] = i * 3;
    }

    for(int i = 0; i < playerNbr; i++){
        printf("[%d] ", playerList[i]);
    }

    printf("\n______________________________________________________________\n");

    playerNbr = 20;
    playerList = realloc(playerList, playerNbr * sizeof(int));

    for(int i = 0; i < playerNbr; i++){
        printf("Joueur %d -> numero %d\n", i+1, i*3);
        playerList[i] = i * 3;
    }

    for(int i = 0; i < playerNbr; i++){
        printf("[%d] ", playerList[i]);
    }


    free(playerList);

    return 0;
}