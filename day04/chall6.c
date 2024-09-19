#include <stdio.h>
#include <string.h>

typedef struct produit{
    char nom[20];
    float prix;
    int quantite;
}produit;
int main(){
    produit tab[100];
    for (int i=0;i<100;i++){
    printf("le produit numero %d: ",i+1);
        scanf("%s",tab[i].nom);
        printf("prix: ");
        scanf("%f",&tab[i].prix);
        printf("quantite: ");
        scanf("%d",&tab[i].quantite);
        printf("\n");
    }

    printf("affichage des produit: \n");
    for(int i=0;i<3;i++){
        printf("produit%d: %s\tprix%.f\tquantite%d\n",i,tab[i].nom,tab[i].prix,tab[i].quantite);
    }
    return 0;
}