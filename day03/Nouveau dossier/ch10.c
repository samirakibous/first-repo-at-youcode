#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main() {
    const char caracters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    int l;
    srand(time(NULL));
    printf("veuillez saisir la longueur du mot de passe :\n");
    scanf("%d",&l);
        char mp[l+1];
    for(int i=0;i<l;i++)
    mp[i]=caracters[rand()%sizeof(caracters)-1];
    mp[l] = '\0'; 
    printf("le mot de passe : %s",mp);
}




