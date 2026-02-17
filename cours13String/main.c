#include <stdio.h>
#include <string.h>

/*
    #include <string.h> => permet l'utilisation de methode pour les str
    FONCTION STRING:
    strcpy() : copie une chaine dans une autre
    strlen() : longueur d'une chaine (sans charactère \0)
    strcmp() : comparer 2 string (retourne -1 pour mot1<mot2(ordre alphabetique),
                                     0 pour identique, 1 pour mot1>mot2)
    strcat() : concaténer 2 string
    strstr() : chercher une string dans une string
    strchr() : chercher 1ere occurence du caractère

    /////////////////////////////////////
    #include <stdio.h>
    sprintf() : ecrire dans une string

*/

int main(void){
    signed char word[] = "Julien"; // on doit declarer une lettre de plus (fin de chaine '\0') 
    printf("%s\n", word);
    /*
        word[7] = "juilen";
        le tableau ne peut être modifié même en gardant la même taille
    */

    char prenom[25] = "Julien";
    char stockage[256];
    
    printf("Ton prenom est : %s\n", prenom);

    printf("Change ton prenom : \n");
    scanf("%s", stockage);

    strcpy(prenom, stockage);

    printf("Ton nouveau prenom : %s\n", prenom);


    //_____test comparaison avec strcmp() _______
    char word1[] = "atatos";
    char word2[] = "patate";
    int test = strcmp(word1, word2);
    printf("Comparaison : %d\n",strcmp(word1, word2));
    if(test == 0){
        printf("%s = %s\n", word1,word2);
    }else if(test == 1){
        printf("%s > %s\n",word1,word2);
    }else{
        printf("%s < %s\n",word1, word2);
    }

    //______________concatener______________________
    char concatWord1[] = "Ja";
    char concatWord2[] = "Ba";

    printf("%s\n", strcat(concatWord1, concatWord2));

    //_____________ strstr() __________________________
    char sentence[] = "C'est ma priere.";
    char wordToFind[] = "priere.";
    char const * pos = strstr(sentence, wordToFind);

    printf("%d\n", sentence);
    printf("%d\n", pos);
    printf("%d\n", pos - sentence);

    //_______________strchr() ________________________
    char text[] = "tire-bouchon";
    char characterToFind = '-';

    printf("%s\n", strchr(text, characterToFind));

    //_____________sprintf() ____________________________
    char fullText[256];
    char another = sprintf(fullText, "wtf", 2);
    printf("%s", fullText);

    return 0;
}