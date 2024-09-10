#include<stdio.h>

int main(){
    int d;
    float Yards;
    printf("veuillez donner la distance en km : ");
    scanf("%d",&d);
    Yards = d * 1093.61;
    printf("la distance en yards :%.2f", Yards);
    return 0;
}