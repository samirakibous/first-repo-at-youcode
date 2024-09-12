#include<stdio.h>
#include<stdlib.h>
int main(){
     int i,n,m,j,temp;
    printf("veuillez saisir le nombre d'elements de tableau :\n");
    scanf("%d",&n);
    int tab[n];
    printf("donner les elements de tableau :\n");
    for(i=0;i<n;i++){
    scanf("%d",&tab[i]);
    }
    printf("donner l'element a rechercher");
    scanf("%d",&m);
    for(i=0;i<n;i++){
        if(tab[i]==m)
        printf("\n l'element est present \n");
    else 
    printf("\n l'element n'est pas present\n");
    }


}