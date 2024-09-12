#include<stdio.h>
#include<stdlib.h>
int main(){
     int i,n,m,nv,j,temp,moy,s,count;
    printf("veuillez saisir le nombre d'elements de tableau 1 :\n");
    scanf("%d",&n);
    printf("veuillez saisir le nombre d'elements de tableau 2 :\n");
    scanf("%d",&m);
    int tab1[n];
    printf("donner les elements de tableau 1 :\n");
    for(i=0;i<n;i++){
    scanf("%d",&tab1[i]);
    }
    int tab2[m];
    int tab3[n+m];
    printf("donner les elements de tableau 2 :\n");
    for(i=0;i<m;i++){
    scanf("%d",&tab2[i]);
    }
    for(i=0;i<n;i++){
        tab3[i]=tab1[i];
    }
    for(j=0;j<n+m;i++,j++){
        tab3[i]=tab2[j];
    }
    for(i=0;i<n+m;i++)
    printf("%d ",tab3[i]);
}