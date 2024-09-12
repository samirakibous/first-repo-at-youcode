#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n,j,temp;
    printf("veuillez saisir le nombre d'elements de tableau :\n");
    scanf("%d",&n);
    int tab[n],T[n];
    printf("donner les elements de tableau :\n");
    for(i=0;i<n;i++){
    scanf("%d",&tab[i]);
    }
   for(i=0;i< n;i++) {
    T[i]=tab[i];
    }
    for(i=0;i<n;i++){
    printf("%d ",tab[i]);
    printf("%d ",T[i]);
    } 
    for(i=0;i<n;i++){
        if(tab[i]==T[i])
        printf("les tableaux sont identiques !");
        else
        printf("les tableaux ne sont pas identiques !");
    }}
