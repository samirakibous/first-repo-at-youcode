#include<stdio.h>


int main(){

    int Num,tmp,inv=0;
    printf("Entree un un entier positif: ");
    scanf("%d",&Num);
    tmp=Num;
    while(tmp>0){
        inv=inv*10+tmp%10;
        tmp/=10;
    }
    printf("%d",inv);

    return 0;
}