#include <stdio.h>
#include <stdlib.h>
#include "numbers.h"

// Attention il faut compiler main.c et numbers.c (gcc *.c -o prog)
// exit(1) dans <stdlib.h>

typedef enum Boolean{
    False,
    True
}Boolean;

int main(void){
    int menuChoice = 10;
    Boolean startApp = True;
    greetingsWorld();

    while(startApp == True){
        displayMenu();
        int result = scanf("%d", &menuChoice);
        // vider le buffer en cas de saisie incorrecte
        if(result != 1){
            while(getchar() != '\n');
            printf("Saisie incorrecte \n");
        }
        switch(menuChoice){
            case 1:
                addFct();
                break;
            case 2:
                subFct();
                break;
            case 3:
                multFct();
                break;
            case 4:
                divFct();
                break;
            case 0:
                printf("Bonne journee! Au revoir.");
                exit(1);
                break;
            default:
                exit(1);
                break;
        }
    }
    

    
    return 1;
}