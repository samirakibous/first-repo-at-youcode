#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,s,i;
    printf("veuillez saisir un nombre: \n");
    scanf("%d",&n);
    s=0;
    for(i=0;i<=n;i++){
        s=s+i;
    }
    printf("la somme de %d nombres est:%d",n,s);
}