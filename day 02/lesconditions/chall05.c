#include<stdio.h>

int main(){
    int bud,dest,nbr;

    printf("Veuillez saisir votre budget: ");
    scanf("%d",&bud);
    printf("Veuillez saisir la destination (1 pour plage, 2 pour montagne, 3 pour ville): ");
    scanf("%d",&dest);
    printf("Veuillez saisir le nombre de personnes: ");
    scanf("%d",&nbr);

    if(bud>=1000)
        printf("Voyage haut de gamme\n");
    else if(bud >= 500)
        printf("Voyage moyen\n");
    else 
        printf("Voyage economique\n");
    

    if (dest==1) {
        if (bud>=1000 && nbr>2)
            printf("La destination recommandee : Plage\n");
        else if(bud)
            printf("La destination plage non recommandee avec ce budget pour ce nombre de personnes.\n");
    }
    else if (dest == 2) {
        if (bud>=500 && nbr<=2)
            printf("La destination recommandee : Montagne\n");
        else
            printf("La destination montagne non recommandée avec ce budget ou ce nombre de personnes.\n");
    } else if (dest == 3) 
        printf("La destination recommandee : Ville\n");
    else 
        printf("La destination invalide.\n");

    return 0;
}
