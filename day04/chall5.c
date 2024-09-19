#include <stdio.h>
#include <string.h>
struct Livre {
    char titre[100];
    char auteur[100];
    int annee;
};

struct Livre creerLivre(char titre[], char auteur[], int annee) {
    struct Livre nouveau;
    strcpy(nouveau.titre, titre);
    strcpy(nouveau.auteur, auteur);
    nouveau.annee = annee;
    return nouveau;
}

int main() {

    struct Livre monLivre = creerLivre("la mer", "sami ra", 1949);
    printf("Titre : %s\n", monLivre.titre);
    printf("Auteur : %s\n", monLivre.auteur);
    printf("Annee : %d\n", monLivre.annee);

    return 0;
}
