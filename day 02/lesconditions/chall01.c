#include <stdio.h>
#include<stdlib.h>
int main() {
    int revenu,score,duree;
    printf("veuillez saisir le revenu Revenu annuel (en euros)");
    scanf("%d",&revenu);
    printf("veuillez saisir le Score de credit (sur 1000)");
    scanf("%d",&score);
    printf("veuillez saisir la durée du pret (en années)");
    scanf("%d",&score);
   if(revenu >= 30000  && score >= 700 && duree  <= 10  ){
    printf("eligible");
   }
else if(revenu >= 30000 && score  >= 650 && duree <= 15 )
  printf("eligible avec conditions");
else 
printf("non eligible");
return 0;
}