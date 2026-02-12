#include <stdio.h>
#include "lib.h"

#define TVA 20

float get_price(float prixHT){
    float prixTTC = prixHT + (prixHT * TVA /100);
    return prixTTC; 
}