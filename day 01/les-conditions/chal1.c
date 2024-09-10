#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	printf("veuillez saisir un nombre : \n");
	scanf("%d",&n);
	if(n%2==0)
	printf("%d est pair",n);
	else
	printf("%d est impair",n);
}