#include <stdio.h>

int main(void){
    int aNbr;
    printf("Saisissez un nombre entier: \n");
    scanf("%d", &aNbr);

    printf("Votre entier en octal: %o \n", aNbr);
    printf("Votre entier en hexadecimal: %x \n", aNbr);


    return 0;
}