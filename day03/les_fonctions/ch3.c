#include<stdio.h>
#include<stdlib.h>
int Maximum(int a,int b){
    if(a>b)
    return a;
    else 
    return b;
}
int main(){
    int n1,n2;
    printf("veuillez saisir deux nombres :\n");
    scanf("%d%d",&n1,&n2);
    printf("les meximum est : %d ",Maximum(n1,n2));
}