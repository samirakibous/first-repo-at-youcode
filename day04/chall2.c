#include<stdio.h>
#include<stdlib.h>
typedef struct etudiant{
    char nom[10];
    char prenom[10];
    int note[3];
}etudiant;
int main(){
    etudiant e1;
    printf("donner un nom :\n");
    scanf("%s",&e1.nom);
    printf("donner un prenom :\n");
    scanf("%s",&e1.prenom);
    printf("donner les 3 notes :\n");
    scanf("%d",&e1.note[0]);
    scanf("%d",&e1.note[1]);
    scanf("%d",&e1.note[2]);
    printf("%s %s %d %d %d",e1.nom,e1.prenom,e1.note[0],e1.note[1],e1.note[2]);

}