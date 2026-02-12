#include <stdio.h>

int init_ball(int posX){
    posX = 150;
    printf("Reinitialisation de la position de la balle x=%d.\n", posX);
    return posX;
}

// On peux affecter le code de la fonction apres le main mais il faut la declarer imperativement avant.
int greetings(void);

int main(void){

    int ballX;

    ballX = 175;
    printf("Position de la balle  en fin de partie x=%d.\n", ballX);

    ballX = init_ball(ballX);
    printf("Position de la balle apres reinitialisation x=%d.\n", ballX);

    greetings();

    return 0;
}

int greetings(void){
    printf("Hello World!!! ;)");
    
    return 1;
}