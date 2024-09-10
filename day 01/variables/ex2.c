#include<stdio.h>

int main(){
    int c;
    float k;
    printf("veuillez donner la temperature en celcius : ");
    scanf("%d",&c);
    k=c+273.15;
    printf("la temperature en kelvin est:%.2f", k);
    return 0;
}