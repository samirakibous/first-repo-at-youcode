#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b,s,t;
	
	printf("donner deux nombres :\n");
	scanf("%d%d",&a,&b);
	s=a+b;
	if(a!=b){
	printf("la somme est :%d\n",s);
	}

	else{
	t=3*s;
	printf(" le triple de leur somme est %d :",t);
	}
}
