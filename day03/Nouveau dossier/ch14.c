#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,i;
    printf("veuillez choisir :1-lundi\n 2-mardi\n 3-mercredi\n 4-jeudi\n  5-vendredi\n 6-samedi\n 7-dimanche\n ");
    scanf("%d",&n);
    for(i=n;i<=7;i++){
    switch(i){
        case 1:
            printf("lundi ");
            break;
        case 2:
            printf("mardi ");
            break;
        case 3:
            printf("mercredi ");
            break;
        case 4:
            printf("jeudi ");
            break;
        case 5:
            printf("vendredi ");
            break;
        case 6:
            printf("samedi ");
            break;
        case 7:
            printf("dimanche ");
            break;
        }
    }
}