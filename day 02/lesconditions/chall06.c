#include <stdio.h>

int main() {
    float c, facture;
    int typeU, typeC;
    float tarif, supplement;
    printf("Veuillez saisir la consommation d'electricite (en kWh) : ");
    scanf("%f", &c);
    printf("Veuillez saisir le type d'utilisateur (1 pour residentiel, 2 pour commercial) : ");
    scanf("%d", &typeU);
    printf("Veuillez saisir le type de contrat (0 pour standard, 1 pour reduit) : ");
    scanf("%d", &typeC);
    if (c < 0) {
        printf("Erreur : La consommation ne peut pas etre negative.\n");
       }
    else if (typeU < 1 || typeU> 2) {
        printf("Erreur : Le type d'utilisateur doit etre 1 (residentiel) ou 2 (commercial).\n");
    }
    else if (typeC < 0 || typeC > 1) {
        printf("Erreur : Le type de contrat doit etre 0 (standard) ou 1 (reduit).\n");
    }
    else if (typeU == 1) { 
        if (typeC == 0) {
            tarif = 0.20; 
        } else {
            tarif = 0.15; 
        }
    } else { 
        if (typeC == 0) {
            tarif = 0.30; 
        } else {
            tarif = 0.25; 
        }
    }
    facture = c * tarif;
    if (c > 500) {
        supplement = 0.10 * facture;
        facture += supplement;
    }
    printf("Montant de la facture d'electricite : %f \n", facture);
    return 0;
}

