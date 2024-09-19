#include<stdio.h>
#include<stdlib.h>
typedef struct rectangle{
    float longueur,largeur;
}rectangle;
float calcule(rectangle r1){
    return r1.longueur*r1.largeur;
}
int main(){
    rectangle r2;
    float aire;
    printf("donner la longueur du rectangle :\n");
    scanf("%f",&r2.longueur);
    printf("donner la largeur du rectangle :\n");
    scanf("%f",&r2.largeur);
    aire=calcule(r2);
    printf("l'air du rectangle :%f",aire);
}