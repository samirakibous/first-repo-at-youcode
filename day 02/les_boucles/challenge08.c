#include<stdio.h>

int main(){

    int f0=0,f1=1,f,Num;

    do{
        printf("Entree un un entier positif: ");
        scanf("%d",&Num);
    }while(Num<0);
    f=f0;
    printf("%d\n",f0);
    printf("%d\n",f1);
    while(f<Num){
        f=f0+f1;
        printf("%d\n",f);
        f0=f1;
        f1=f;
    }

    return 0;
}