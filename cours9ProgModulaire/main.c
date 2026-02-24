#include <stdio.h>
#include "player.h"

// Attention il faut compiler main.c et player.c

int main(void){

    int level = 15;
    printf("Level : %d\n", level);

    greetings();

    level = resetLevel();
    printf("Level : %d\n", level);

    printf("%d\n",levelUp());
    printf("%d\n",levelUp());
    printf("%d\n",levelUp());
    printf("%d\n",levelUp());

    return 0;
}