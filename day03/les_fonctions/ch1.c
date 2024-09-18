#include<stdio.h>
#include<stdlib.h>
int Somme(int a,int b){
    return a+b;
}
int main(){
    int n1,n2;
    printf("veuillez saisir deux nombres :\n");
    scanf("%d%d",&n1,&n2);
    printf("%d+%d=%d",n1,n2,Somme(n1,n2));
}