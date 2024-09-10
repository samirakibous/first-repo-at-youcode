#include <stdio.h>

int main() {
    int choix;
    int annee;
    printf("Choisissez le type de conversion :\n");
    printf("1. Convertir en mois\n");
    printf("2. Convertir en jours\n");
    printf("3. Convertir en heures\n");
    printf("4. Convertir en minutes\n");
    printf("5. Convertir en secondes\n");
    printf("6. Quitter\n");
    printf("Entrez votre choix (1-6) : ");
    scanf("%d", &choix);

    if (choix >= 1 && choix <= 5) {
        printf("Entrez le nombre d'annees a convertir : ");
        scanf("%d", &annee);

        switch (choix) {
            case 1:
                
                printf("%d annee(s) = %d mois\n", annee, annee * 12);
                break;
            case 2:
              
                printf("%d annee(s) = %d jours\n", annee, annee * 365);
                break;
            case 3:
               
                printf("%d annee(s) = %d heures\n", annee, annee * 365 * 24);
                break;
            case 4:
              
                printf("%d annee(s) = %d minutes\n", annee, annee * 365 * 24 * 60);
                break;
            case 5:
              
                printf("%d annee(s) = %d secondes\n", annee, annee * 365 * 24 * 60* 60);
                break;
        }
    } else if (choix == 6) {
        printf("Quitter le programme.\n");
    } else {
        printf("Choix invalide. Veuillez entrer un nombre entre 1 et 6.\n");
    }

    return 0;
}

