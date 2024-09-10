#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,n1,n2,n3,n4;
	printf("donner un nombre:\n");
	scanf("%d",&n);
	n1=n/1000;
	n2=(n/100)%10;
	n3=(n/10)%10;
	n4 = n % 10;
	printf("L'inverse du nombre est : %d%d%d%d\n", n4,n3, n2, n1);
	return 0;
}                                     

