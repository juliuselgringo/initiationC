#include <stdio.h>
#include "lib.h"

#define TVA 20

#define print printf

/*
    Constantes predefinie du langage C:
    __FILE__ (nom du fichier)
    __LINE__ (ligne du fichier)
    __DATE__ (date de compilation)
    __TIME__ (heure de compilation)

*/

int main(void){
    float prixHT = 16;
    float prixTTC = 0;

    prixTTC = get_price(prixHT);
    print("Prix toute taxe comprise: %.2f \n", prixTTC);

    print("nom du fichier: %s \n", __FILE__);

    return 0;
}