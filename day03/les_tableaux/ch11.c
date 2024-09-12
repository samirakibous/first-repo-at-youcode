#include<stdio.h>
#include<stdlib.h>
int main(){
     int i,n,m,nv,j,temp;
    printf("veuillez saisir le nombre d'elements de tableau :\n");
    scanf("%d",&n);
    int tab[n];
    printf("donner les elements de tableau :\n");
    for(i=0;i<n;i++){
    scanf("%d",&tab[i]);
    }
    printf("donner la valeur a remplacer ");
    scanf("%d",&m);
     printf("donner la nouvelle valeur ");
    scanf("%d",&nv);

    for(i=0;i<n;i++){
        if(tab[i]==m)
        tab[i]=nv;
    printf("%d\n",tab[i]);
    }
}