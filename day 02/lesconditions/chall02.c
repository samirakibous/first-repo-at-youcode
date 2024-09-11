#include <stdio.h>
#include<stdlib.h>
int main() {
    int age ,typeV,nbrA;
    float primeB,prime;
    printf("veuillez saisir votre age : \n");
    scanf("%d",&age);
    printf("veuillez saisir votre type de voiture avec :1 pour sportive, 2 pour utilitaire, 3 pour familiale \n");
    scanf("%d",&typeV);
    printf("veuillez saisir le nombre d'accidents au cours des 5 dernieres annees :\n");
    scanf("%d",&nbrA);
    printf("veuillez saisir votre prime de base : \n");
    scanf("%f",&primeB);

    if(age<25){
        prime=primeB*1.5;
        printf("%f",&prime);
    }else if(age>25 && age<65){
        printf("%f",prime);

    }
else if(age>65){
    prime=primeB*1.2;
    printf("%f",prime);
}
else if(typeV ==1){
    prime= primeB * 2;
    printf("%f",prime);
}
else if(typeV ==2){
    prime= primeB *  1.2;
    printf("%f",prime);
}
else if(typeV ==3){
    prime= primeB * 1.1;
    printf("%f",prime);
}
else if(nbrA>1){
    prime=primeB+((primeB*30)/100);
    printf("%f",prime);
}
return 0;
}