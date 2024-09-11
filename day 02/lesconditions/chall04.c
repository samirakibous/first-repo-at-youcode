#include<stdio.h>

int main(){

    int score,anc,rec;

    printf("Entree Score de performance (de 0 a 100): ");
    scanf("%d",&score);
    printf("Entree Anciennete (en annees): ");
    scanf("%d",&anc);
    printf("Recompenses recues (0 pour aucune, 1 pour une, 2 pour deux ou plus): ");
    scanf("%d",&rec);

    if(score>=90&&anc>5)
        printf("Excellente\n");
    else if(score>=75&& anc>=3)
        printf("Bonne");
    else if(score>=50&& anc<3)
        printf("Satisfaisante\n");
    else 
        printf("Insuffisante\n");

    if(rec==1){
        score+=score*0.1;
        printf("vous avez nu bonus de +10%% votre score est: %d",score);
        }
    else if(score>1){
        score+=score*0.2;
        printf("vous avez nu bonus de +20%% votre score est: %d",score);
        }
    return 0;
}