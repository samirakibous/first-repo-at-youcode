#include <stdio.h>

int main() {
    int jour, mois, annee; 
    printf("Entrez une date au format dd/mm/yy : ");
    scanf("%d/%d/%d", &jour, &mois, &annee);
    if (mois < 1 || mois > 12) {
        printf("Mois invalide\n");
        return 1;
    }
    printf("%d", jour);
    if (mois == 1) {
        printf("Janvier");
    } else if (mois == 2) {
        printf("Fevrier");
    } else if (mois == 3) {
        printf("Mars");
    } else if (mois == 4) {
        printf("Avril");
    } else if (mois == 5) {
        printf("Mai");
    } else if (mois == 6) {
        printf("Juin");
    } else if (mois == 7) {
        printf("Juillet");
    } else if (mois == 8) {
        printf("Aout");
    } else if (mois == 9) {
        printf("Septembre");
    } else if (mois == 10) {
        printf("Octobre");
    } else if (mois == 11) {
        printf("Novembre");
    } else if (mois == 12) {
        printf("Decembre");
    }
    printf("%d\n", annee);

    return 0;
}

