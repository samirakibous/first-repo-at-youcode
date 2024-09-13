#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, b0=0,b1=1,F;
    printf("Veuillez saisir un nombre :\n");
    scanf("%d", &n);
    if(n<0)
    printf("veuillez saisir un nombre positif !");
    F=b0;
    printf("%d ",b0);
    printf("%d ",b1);
    while(F<n){
    F=b0+b1;
    b0=b1;
    F=b1;
    }
}