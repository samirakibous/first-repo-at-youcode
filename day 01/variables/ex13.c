#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,b,p,temp;
    printf("veuillez entrer un nombre entier:\n");
    scanf("%d",&n);
    temp=n;
    b=0;
    p=1;
    while(temp>0){
        b+=(temp%2)*p;
        temp/=2;
        p*=10;
    }
    printf("le resultat en binaire est :%d\n",b);
    printf("\n le resultat en hexadecimal est : %x",n);
}
