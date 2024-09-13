#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,fact,i;
    printf("veuillez saisir un nombre :\n");
    scanf("%d",&n);
    fact=1;
    for(i=1;i<=n;i++){
    fact*=i;
    }
    printf("le factoriesl de %d est : %d",n,fact);
}
