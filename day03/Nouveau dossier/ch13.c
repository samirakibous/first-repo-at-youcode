#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,mul,i,s=0;
    printf("veuillez saisir un nombre :\n");
    scanf("%d",&n);
    for(i=0;i<=10;i++){
        mul=n*i;
        printf("%d *%d = %d",n,i,mul);
     s+=mul;
    }
printf("\nla somme des produits est :%d",s);
}