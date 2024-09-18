#include<stdio.h>
#include <stdlib.h>
int compare(const void* a, const void* b) {
   return (*(int*)a - *(int*)b);
}

int main(){

    int N,gauch,droit,mil,val;
    printf("Entree le nombre d'elements du tableau: ");
    scanf("%d",&N);
    int tab[N];
    for(int i=0;i<N;i++)
        scanf("%d",&tab[i]);
    qsort(tab,N,sizeof(int),compare);

    printf("Entree la valeur a rechercher: ");
    scanf("%d",&val);

    droit=N-1;
    gauch=0;
    while(gauch<=droit){
        mil=gauch+(droit-gauch)/2;
        if(tab[mil]==val){
            printf("%d existe a la position %d",val,mil);
            break;
        }
        else if(tab[mil]>val)
            droit=mil-1;
        else
            gauch=mil+1;
    }

    return 0;
}