#include<stdio.h>
#include<stdlib.h>
typedef struct personne{
    char nom[10];
    char prenom[10];
    int age;
}personne;
int main(){
    personne p1;
    printf("veuillez donner un nom :\n");
    scanf("%s",&p1.nom);
    printf("veuillez donner un prenom  :\n");
    scanf("%s",&p1.prenom);
    printf("veuillez donner un age :\n");
    scanf("%d",&p1.age);
    printf("%s %s %d",p1.nom,p1.prenom,p1.age);


}