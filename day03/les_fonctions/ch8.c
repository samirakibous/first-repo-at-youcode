#include<stdio.h>
#include<stdlib.h>
int teste(int a){
	if(a%2==0)
	return 1;
	else
	return 0;
}
int main(){
	int x,y,z;
	printf("donner un nombre :\n");
	scanf("%d",&x);
    z=teste(x);
    if(z==1)
    printf("%d est pair !",x);
    else
    printf("%d est impair !",x);
}
