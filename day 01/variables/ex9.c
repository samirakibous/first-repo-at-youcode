#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int x1,x2,y1,y2,z1,z2;
	float distance;
	printf("donner les coordonnees du premier point :\n");
	scanf("%d%d%d",&x1,&y1,&z1);
	printf("donner les coordonnees du deuxieme point :\n");
	scanf("%d%d%d",&x2,&y2,&z2);
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
    printf("la distance entre les deux points est :%f",distance);
}
	
