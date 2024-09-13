#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,s=0,count=-1;
    float moy ;

    do{
        printf("veuillez saisir un nombre :\n");
        scanf("%d",&n);
        s+=n;
        count++;
    }while(n!=0);
    moy=s/count;
    printf("%f ",moy);
    return 0;
}
