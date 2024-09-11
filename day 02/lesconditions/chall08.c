#include <stdio.h>
int main() {
    int age, hist, typeC;
    float couv;
    printf("Veuillez saisir votre age : ");
    scanf("%d", &age);
    printf("Veuillez saisir votre historique medical (0 pour aucun probleme, 1 pour probleme mineur, 2 pour probleme majeur) : ");
    scanf("%d", &hist);
    printf("Veuillez saisir le type de couverture (1 pour de base, 2 pour etendue) : ");
    scanf("%d", &typeC);
    if (age < 0) {
        printf("Erreur : L'age ne peut pas etre negatif.\n");
    }
    else if (hist < 0 || hist > 2) {
        printf("Erreur : L'historique medical doit etre 0, 1 ou 2.\n");
    }
    else if (typeC < 1 || typeC > 2) {
        printf("Erreur : Le type de couverture doit etre 1 (de base) ou 2 (etendue).\n");
    }
    else if (age < 30) {
        printf("Plan de sante recommande : Plan de base\n");
    } else if (age >= 30 && hist == 0) {
        printf("Plan de sante recommande : Plan de base\n");
    } else {
        printf("Plan de sante recommande : Plan etendu\n");
    }
    if (hist == 2) {
        couv = 100.0; 
        printf("Couverture supplementaire pour probleme majeur : %.2f €\n", couv);
    } else {
        couv = 0.0;
    }
    return 0;
}

