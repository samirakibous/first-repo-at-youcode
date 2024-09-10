#include<stdio.h>
#include<stdlib.h>
int main(){
    int temp;
    printf("doneer la temperature de l'eau en Celsius:\n");
    scanf("%d",&temp);
    if(temp<0)
    printf("solide");
    else if(temp>=100)
    printf("Gaz");
    else 
    printf("liquide");
return 0;

}