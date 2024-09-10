#include<stdio.h>
#include<stdlib.h>
int main(){
	int lon,lar;
	float surface;
	printf("donner la langueur du rectangle :\n");
	scanf("%d",&lon);
	printf("donner la largeur du rectangle :\n");
	scanf("%d",&lar);
	surface=lon*lar;
	printf("la surface du rectangle est %f :",surface);
	return 0;
}
	
	
