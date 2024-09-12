#include<stdio.h>
#include<stdlib.h>
int main(){
     int i,n,j,temp;
    printf("veuillez saisir le nombre d'elements de tableau :\n");
    scanf("%d",&n);
    int tab[n];
    printf("donner les elements de tableau :\n");
    for(i=0;i<n;i++){
    scanf("%d",&tab[i]);
    }
    for (i=0;i<n-1;i++) {
    for (j=i+1;j<n;j++) {
    temp=tab[i];
    tab[i]=tab[j];
    tab[j]=temp;
    }
    }
    
    for(i=0;i<n;i++){
        printf("%d",tab[i]);
    }  
    }
