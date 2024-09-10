#include<stdio.h>

int main()
{
    char nom[10], prenom[10], sexe[10], email[30];
    int age;
    
    printf("veuillez saisir votre nom :");
    scanf("%s",nom);
    
    printf("veuillez saisir votre prenom :");
    scanf("%s",prenom);
    
    printf("veuillez saisir votre sexe :");
    scanf("%s",sexe);
    
    printf("veuillez saisir votre email :");
    scanf("%s",email);
    
    printf("veuillez saisir votre age :");
    scanf("%d",&age);
    
    printf("nom : %s\n", nom);
    printf("prenom : %s\n", prenom);
    printf("sexe : %s\n", sexe);
    printf("email : %s\n", email);
    printf("age : %d\n", age);
    
    return 0;
}