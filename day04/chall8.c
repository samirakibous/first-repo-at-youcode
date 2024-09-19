#include<stdio.h>

typedef struct cercle{
    float rayon;
}cercle;

float aire_cercle(cercle c){
    return c.rayon*c.rayon*3.14;
}

int main(){
    cercle cercle1;
    printf("Entrez le rayon: ");
    scanf("%f",&cercle1.rayon);
    printf("aire= %.2f",aire_cercle(cercle1));
    return 0;
}