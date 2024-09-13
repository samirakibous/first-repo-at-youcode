#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,j,p;
    printf("veuillez saisir un nombre :\n");
    scanf("%d",&n);
    for( i=1;i<n;i++){
        int p=1; 
    for(j=2;j<i;i++)
        if(i%j!=0){
            p=0;
            break;
        }
         if(p==1)
    printf("%d ",i);
}
    }
   