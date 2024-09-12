#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    printf("veuillez saisir le nombre d'elements de tableau :\n");
    scanf("%d",&n);
    int tab[n];
    printf("entrer les elements de tableau :\n");
    for(i=0;i<n;i++){
       scanf("%d",&tab[i]);
    }
    printf("les elements de tableau sont:\n");
    for(i=0;i<n;i++){
        printf("%d\n",tab[i]);
    }
}