#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,f,i;
    printf("veuillez saisir un nombre :\n");
    scanf("%d",&n);
    f=1;
    for(i=1;i<=n;i++){
        f=f*i;
    }
    printf("le factoriel de %d est : %d",n,f);
    }
