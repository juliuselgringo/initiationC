#include <stdio.h>

/*
    ==
    !=
    >
    <
    >=
    <=
    ||
    &&
    !
*/

int main(void){
    int number = -12;
    int age = 0;
    if(number == 0){
        printf("Le nombre est bien egal a 0.\n");
    }else if(number < 0){
        printf("Le nombre est negatif.\n");
    }else{
        printf("Le nombre est positif.\n");        
    }

    switch (age)
    {
    case 0:
        printf("Tu as 0 ans.\n");
        break;
    
    default:
        break;
    }

    (age > 18) ? printf("Tu es majeur!\n") : printf("Tu es mineur!\n");

    return 0;
}