#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b;
    printf("donner deux nombres a et b:");
    scanf("%d%d",&a,&b);
    printf("%d+%d=%d\n",a,b,a+b);
    printf("%d*%d=%d\n",a,b,a*b);
    printf("%d-%d=%d\n",a,b,a-b);
    if(b==0)
    printf("donner une valeure differente de 0");
else
 printf("%d/%d=%f",a,b,(float)a/b);
    }

