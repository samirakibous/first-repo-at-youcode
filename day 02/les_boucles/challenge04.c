#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,n;
    printf("veuillez saisir un nombre : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        if(i%2!=0)
        printf("%d\n",i);
    }
}