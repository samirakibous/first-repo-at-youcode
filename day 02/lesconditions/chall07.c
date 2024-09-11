#include <stdio.h>

int main() {
    float revAn, revImp, impots, ded;
    int statut;
    printf("Veuillez saisir le revenu annuel (en euros) : ");
    scanf("%f", &revAn);

    printf("Veuillez saisir le statut fiscal (1 pour celibataire, 2 pour marie, 3 pour chef de famille) : ");
    scanf("%d", &statut);
    if (revAn < 0) {
        printf("Erreur : Le revenu annuel ne peut pas etre negatif.\n");
    }
    else if (statut < 1 || statut> 3) {
        printf("Erreur : Le statut fiscal doit être 1 (celibataire), 2 (marie) ou 3 (chef de famille).\n");
    }
    switch (statut) {
        case 1: 
            ded = 1000.0;
            break;
        case 2: 
            ded = 2000.0;
            break;
        case 3:
            ded = 3000.0;
            break;
    }
    revImp = revAn - ded;

    if (revImp <= 20000) {
        impots = revImp * 0.05;
    } else if (revImp <= 50000) {
        impots = revImp * 0.10; 
    } else {
        impots = revImp * 0.20; 
    }
    printf("Deduction applicable : %2f €\n", ded);
    printf("Impot a payer : %2f €\n", impots);

    return 0;
}

