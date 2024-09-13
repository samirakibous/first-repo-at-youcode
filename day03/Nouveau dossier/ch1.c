#include<stdio.h>
#include<stdlib.h>
int main(){
    int m,n,i;
    printf("donner un nombre:\n");
    scanf("%d",&n);
    for(i=10;i>=0;i--){
        m=n*i;
        printf("%d * %d = %d\n",n,i,m);
    }
}
