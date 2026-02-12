#include <stdio.h>

int main(void){
    int i = 0;
    while(i<20){
        printf("%d Alertes! Les petis hommes verts arrivent.\n", i);
        i++;
    }
    
    // possible en do{}while(); pour effectuer le code au moins une fois
    

    for(int j = 0; j <5; j++){
        printf("%d Let s go my man.\n", j);
    }

    // break pour arreter une boucle.

    return 0;
}