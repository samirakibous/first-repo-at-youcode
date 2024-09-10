#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,c;
    float moyP;
    printf("donner 3 nombres a,b et c:\n");
    scanf("%d%d%d",&a,&b,&c);
    moyP=((a*2)+(b*3)+(c*5))/(2+3+5);
    printf("la moyenne ponderee des trois nombres est :%f",moyP);
}

    