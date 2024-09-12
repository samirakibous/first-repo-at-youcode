#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n,fact;
    printf("veuillez saisir le nombre d'elements de tableau :\n");
    scanf("%d",&n);
    int tab[n];
    printf("donner les elements de tableau :\n");
    for(i=0;i<n;i++){
    scanf("%d",&tab[i]);
    }   
    printf("veuillez saisir le facteur de multiplication:\n");
    scanf("%d",&fact);
    for(i=0;i<n;i++){
        tab[i]=tab[i]*fact;
        printf("%d\n",tab[i]);
    }
}