#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 main(){
	int r;
	float v;
	const double pi = 3.141592653589793;
	printf("veuillez saisir le rayon du sphere :\n");
	scanf("%d",&r);
	v=(4/3) * pi * pow(r,3);
	printf("le volume du sphere est : %f",v);

}
