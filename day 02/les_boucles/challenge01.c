#include <stdio.h>
#include<stdlib.h>

int main() {
int n,mul,i;
printf("veullez saisir un nombre :\n");
scanf("%d",&n);
for(i=0;i<=10;i++){
mul=n*i;
printf("%d * %d = %d\n",n,i,mul);
}
}