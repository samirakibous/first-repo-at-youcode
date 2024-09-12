#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,max,n;
    printf("veuillez saisir le nombre d'elements de tableau :\n");
    scanf("%d",&n);
    int tab[n];
    printf("donner les elements de tableau :\n");
    for(i=0;i<n;i++){
    scanf("%d",&tab[i]);
    }   
    max=tab[0];
     for(i=1;i<n;i++){
        if(max<tab[i]){
        max=tab[i];
        printf("le maximum est :%d",tab[i]);
        }
     else 
        printf("le maximum est : %d",max);
    }  

}
