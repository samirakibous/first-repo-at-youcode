#include <stdio.h>

int main() {
    int age, anneeCot,tranches;
    float montantE, pension, bonus,montantSuppl;
    printf("Veuillez saisir votre age : ");
    scanf("%d", &age);

    printf("Veuillez saisir le nombre d'annees de cotisation : ");
    scanf("%d", &anneeCot);

    printf("Veuillez saisir le montant total epargne (en euros) : ");
    scanf("%f", &montantE);
    if (age < 0) {
        printf("Veuillez saisir un age positif.\n");
    }
    else if (anneeCot < 0) {
        printf("Veuillez saisir un nombre positif.\n");
    }
    else if (montantE < 0) {
        printf("Veuillez saisir un nombre positif.\n");
    }
    else if (age >= 65) {
        if (anneeCot >= 30 && montantE >= 100000) {
            printf("Plan de retraite : Plan complet avec pension elevee\n");
        } else if (anneeCot >= 20 && montantE >= 50000) {
            printf("Plan de retraite : Plan partiel avec pension moyenne\n");
        } else {
            printf("Plan de retraite : Criteres non satisfaits pour un plan de retraite\n");
        }
    } else {
        printf("Plan de retraite : Plan epargne non encore disponible\n");
    }

    if (montantEpargne > 50000) {
        montantSuppl = montantEpargne - 50000;
        tranches = (int)(montantSuppl / 10000);
        bonus = 5.0 * tranches; 
        printf("Bonus supplementaire : %.2f%%\n", bonus);
    } else {
        bonus = 0.0;
    }

    return 0;
}

