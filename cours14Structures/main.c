#include <stdio.h>
#include <string.h>

typedef struct Player{
    signed char username[256];
    int hp;
    int mp;
} Player; // Défini Player comme une nouvelle variable

typedef enum Boolean{
    False, // 0
    True // 1
} Boolean;

union Nombre{
    int entier;
    float decimal;
};

/*_________________________________________________________________________________*/
void createPlayer(Player *p){
    strcpy((*p).username, "Tatayoyo");
    (*p).hp = 150;
    // synthaxe plus simple et moderne
    p->mp = 150;
};

/*___________________________________________________________________________________ */
int main (void){
    Player p1 = {"Julien", 100, 100};
    Player p2 = {"", 0, 0};

    createPlayer(&p2);

    printf("Nom du joueur: %s\n", p1.username);
    printf("hp du joueur: %d\n", p1.hp);
    printf("mp du joueur: %d\n", p1.hp);

    // pour changer une string il faut utiliser strcpy donc #include <string.h>
    strcpy(p1.username, "Julius");
    printf("Nom du joueur: %s\n", p1.username);

    // pour les int pas de soucis
    p1.hp -= 50;
    printf("Nom du joueur: %s\n", p1.username);
    printf("HP %d | MP %d\n", p1.hp, p1.mp);

    printf("____________________________________________\n");

    printf("Nom du joueur: %s\n", p2.username);
    printf("HP %d | MP %d\n", p2.hp, p2.mp);

    // tableau de player
    Player players_array[2] = {p1, p2};

    printf("____________________________________________\n");
    // enum
    Boolean started = False;

    if(started == 0){
        printf("Eteind\n");
    }else{
        printf("Allumé\n");
    }
    
    printf("____________________________________________\n");
    // union
    union Nombre nb1;
    nb1.entier = 3;
    nb1.decimal = 3.14;


    printf("%d\n", nb1.entier);
    printf("%.2f\n", nb1.decimal);
    /*
    une union : elle permet d'économiser de la mémoire en partageant le même espace pour différents types,
     mais vous ne devez accéder qu'au dernier membre assigné. Ici, seul nb1.decimal contient une valeur 
     valide (3.14), tandis que nb1.entier contient des données invalides (les octets du float réinterprétés
     comme un int).
    */
    


    return 0;
}