#include<stdio.h>
#include<stdlib.h>
int main(){
     int i,n,m,nv,j,temp,moy,s,count;
    printf("veuillez saisir le nombre d'elements de tableau :\n");
    scanf("%d",&n);
    int tab[n];
    printf("donner les elements de tableau :\n");
    for(i=0;i<n;i++){
    scanf("%d",&tab[i]);
    }
    s=0;
    count=0;
    for(i=0;i<n;i++){
    s=s+tab[i];
    count++;
    }
    moy=s/count;
    printf("la moyenne est :%d \n",moy);
}