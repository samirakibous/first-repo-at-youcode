#include<stdio.h>
#include<stdlib.h>
int Minimum(int a,int b){
    if(a<b)
    return a;
    else 
    return b;
}
int main(){
    int n1,n2;
    printf("veuillez saisir deux nombres :\n");
    scanf("%d%d",&n1,&n2);
    printf("les minimum est : %d ",Minimum(n1,n2));
    return 0;
}