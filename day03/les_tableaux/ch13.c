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
    for(i=0;i<n;i++){
        if(tab[i]%2!=0)
        printf("%d",tab[i]);
}
}