#include<stdio.h>

int main(){
    int Num,s=0;

   do{
        printf("Entree un un entier positif: ");
        scanf("%d",&Num);
    }while(Num<0);

    for(int i=1;i<=Num;i++)
        s+=i;
    printf("la somme de %d premiers entiers est: %d",Num,s);

    return 0;
    
}