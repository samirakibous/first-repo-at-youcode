#include<stdio.h>

int main(){
   float km,m;
    printf("veuillez donner la distance en km/h : ");
    scanf("%f",&km);
    m = km * 0.27778;
    printf("la distance en m/s :%.2f", m);
    return 0;
}