#include <stdio.h>

int main(void){
    /*
    int userAge = 0;

    printf("Quel est votre age?\n");
    // & specifie l'adresse ou est stocke la variable
    scanf("%d", &userAge);

    printf("Vous avez %d ans", userAge);
    */

    signed char lettre = 'A';
    printf("Saisissez votre lettre preferee:\n");
    scanf("%c", &lettre);
    printf("Votre lettre preferee est %c", lettre);

    return 0;
}