#include<stdio.h>
int main(){
    int base,exposant,i,p;
    printf("veuillez saisir la base :\n");
    scanf("%d",&base);
    printf("veuillez saisir l'exposant :\n");
    scanf("%d",&exposant);
if(exposant==0){
    p=1;
printf("%d",p);
}
else if(exposant==1){
 p=base;
printf("%d",p);
}
else 
p=1;
for(i=1;i<=exposant;i++){
    p*=base;
printf("%d^%d=%d",base,exposant,p);
}
}
