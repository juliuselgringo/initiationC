#include <stdio.h>
#include "player.h"

int greetings(void){
    printf("Hello World!\n");
    return 1;
}

int resetLevel(void){
    int level = 0;
    printf("Initialisation du level.\n");
    return level;
}

int levelUp(void){
    static int level = 0; 
    // static permet de garder la valeur de la variable (elle n'est pas détruite en fin de fonction)
    // sans static la variable est réinitialisé à chaque appel de la fonction
    level += 2;
    return level;
}