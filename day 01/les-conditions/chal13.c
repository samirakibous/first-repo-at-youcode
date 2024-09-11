#include<stdio.h>
#include<math.h>

int main(){

    float xA,xB,yA,yB,xM,yM;
    int c1,c2;

    printf("Entree les extremites du segment\n");
    printf("xA: ");
    scanf("%f",&xA);
    printf("yA: ");
    scanf("%f",&yA);
    printf("xB: ");
    scanf("%f",&xB);
    printf("yB: ");
    scanf("%f",&yB);

    printf("Entree  les coordonnees d'un point dans le plan\n");
    printf("xM: ");
    scanf("%f",&xM);
    printf("ysM: ");
    scanf("%f",&yM); 

    c1 = (yM - yA) * (xB - xA) == (yB - yA) * (xM - xA);
    c2 =(xM >= (xA < xB ? xA : xB) && xM <= (xA > xB ? xA : xB)) && (yM >= (yA < yB ? yA : yB) && yM <= (yA > yB ? yA : yB));

    if(c1 && c2)
        printf("Le point (%.2f, %.2f) est sur le segment de (%.2f, %.2f) a (%.2f, %.2f).\n", xM, yM, xA, yA, xB, yB);    
    else
        printf("Le point (%.2f, %.2f) n'est pas sur le segment de (%.2f, %.2f) a (%.2f, %.2f).\n", xM, yM, xA, yA, xB, yB);

    return 0;
}