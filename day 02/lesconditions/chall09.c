#include<stdio.h>
#include<stdlib.h>
int main(){
    int nbrH,typeP,salaireSup,heuresSup;
    float salaireT,prime,salaireB,tauxH;
    printf("Veuillez saisir votre salaire de base (en euros):\n");
    scanf("%f",&salaireB);
    printf("Veuillez saisir le nombre d'heures supplementaires :\n");
    scanf("%d",&nbrH);
    printf("Veuillez saisir le type de poste avec: (1 pour junior, 2 pour senior) :\n");
    scanf("%d",&typeP);
    if(salaireB<0)
    printf("le salaire de base ne doit pas etre negatif\n");
else if(nbrH<0)
    printf("le nombre d'heures supplementaires ne doit pas etre negatif\n");
else if (typeP < 1 || typeP > 2) {
     printf(" Veuillez saisir un des deux choix: 1 (junior) ou 2 (senior).\n");
}
tauxH = salaireB / 160; 
salaireSup = heuresSup * tauxH* 1.5;
 if(typeP == 1) { 
        prime = salaireB * 0.10; 
    } else { 
        prime = salaireB * 0.20; 
    }

    salaireT = salaireB + salaireSup + prime;

    printf("Salaire de base : %f €\n", salaireB);
    printf("Heures supplémentaires : %.2f €\n", salaireSup);
    printf("Prime : %f €\n", prime);
    printf("Salaire total : %f €\n", salaireT);
}