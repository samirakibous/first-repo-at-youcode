#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int a,b,c;
	float moyg;
	printf("donner 3 nombres a ,b et c : \n");
	scanf("%d%d%d",&a,&b,&c);
	moyg= pow((a * b * c),(1.0/3.0));
	printf("la moyenne geometrique des trois nombres est :%f",moyg);
}
