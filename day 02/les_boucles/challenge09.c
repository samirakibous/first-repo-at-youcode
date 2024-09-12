#include<stdio.h>
int main(){
    int Num,tmp,count=0;
    do{
        printf("Entree un un entier positif: ");
        scanf("%d",&Num);
    }while(Num<0);
    tmp=Num;

    if(Num==0)
        count=1;
    else
        while(tmp>0){
            tmp/=10;    
            count++;
        }
    printf("le nombre de chiffres dans %d est %d",Num,count);
    return 0;
}