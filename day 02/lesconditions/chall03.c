#include <stdio.h>

int main() {
    int nj, ju, statut,jr;
    
    printf("Veuillez saisir  le nombre total de jours de conges accordes : ");
    scanf("%d", &nj);

    printf("Veuillez saisir le nombre de jours de conges utilises : ");
    scanf("%d", &ju);

    printf("Veuillez saisir le statut de l'employe (0 pour temps partiel, 1 pour temps plein) : ");
    scanf("%d", &statut);
    if (ju > nj) {
        printf("erreur : Le nombre de jours utilises depasse le nombre de jours accordes.\n");
        return 1; 
    }
    if (statut == 1) { 
        jr = nj - ju;
    } else if (statut == 0) { 
        jr = (nj / 2) - ju;
    } else {
        printf("Statut invalide. Veuillez entrer 0 pour temps partiel ou 1 pour temps plein.\n");
        return 1; 
    }
    printf("Nombre de jours de conges restants : %d\n", jr);
    return 0;
}

