#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("donner la taille de tableau :\n");
    scanf("%d",&n);
    int tab[n];
    for(int i=0;i<n;i++)
    scanf("%d",&tab[i]);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if (tab[j] > tab[j+1]) {
        int tmp = tab[j];
        tab[j] = tab[j+1];
        tab[j+1] = tmp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d",tab[i]);
    }
    return 0;
}