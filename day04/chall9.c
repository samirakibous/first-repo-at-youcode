#include<stdio.h>

typedef struct compte{
    char nom[30];
    float solde;
}compte;

void ajouter(compte *c){
    float montant;
    printf("Entree le solde a ajoute: ");
    scanf("%f",&montant);
    c->solde+=montant;
    printf("montant ajoute.\n");
}

int main(){
    compte compte1={"compte1",30000};
    ajouter(&compte1);
    printf("solde de %s apres modification: %.2f",compte1.nom,compte1.solde);

    return 0;
}