#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,min,n;
    printf("veuillez saisir le nombre d'elements de tableau :\n");
    scanf("%d",&n);
    int tab[n];
    printf("donner les elements de tableau :\n");
    for(i=0;i<n;i++){
    scanf("%d",&tab[i]);
    }   
    min=tab[0];
     for(i=1;i<n;i++){
        if(min<tab[i]){
        min=tab[i];
        printf("le minimum est :%d",tab[i]);
        }
     else 
        printf("le minimum est : %d",min);
    }  

}
