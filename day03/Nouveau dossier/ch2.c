#include<stdio.h>
#include<stdlib.h>
int main(){
    int nbr_et=1,n,i,j,k;
    printf("donner le nombre des lignes :\n");
    scanf("%d",&n);
    int espace=n;
    for(i=0;i<n;i++){
        for(j=0;j<espace;j++){
            printf(" ");
        }
     
        for(k=0;k<nbr_et;k++){
            printf("*");
        }
        printf("\n");
        espace--;
        nbr_et+=2;
    }
   
}