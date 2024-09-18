#include<stdio.h>
#include<stdlib.h>
int Factorielle(int n){
    if(n==0 || n==1)
       return 1;
    else 
    return n*Factorielle(n-1);
}
int main(){
    int num;
    printf("veuillez saisir un nombre  :\n");
    scanf("%d",&num);
    printf("%d",Factorielle(num));
    return 0;
}


