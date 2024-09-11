#include<stdio.h>

int main(){

    int h1,m1,s1,h2,m2,s2;

    printf("1er instants dans le format HH:MM:SS\n");
    scanf("%d",&h1);
    scanf("%d",&m1);
    scanf("%d",&s1);
    printf("2eme instants dans le format HH:MM:SS\n");
    scanf("%d",&h2);
    scanf("%d",&m2);
    scanf("%d",&s2);

    if (h1 == h2 && m1 == m2 && s1 == s2) {
        printf("Il s'agit du meme instant.\n");
    } else if (h1 == h2 && m1 == m2) {
        if (s1 < s2) {
            printf("Le premier instant vient avant le deuxieme.\n");
        } else if (s1 > s2) 
            printf("Le deuxieme instant vient avant le premier.\n");
        
    } else if (h1 == h2 && m1 != m2) {
        if (m1 < m2) {
            printf("Le premier instant vient avant le deuxieme.\n");
        } else if (m1 > m2) 
            printf("Le deuxieme instant vient avant le premier.\n");
        
    } else if (h1 != h2) {
        if (h1 < h2) {
            printf("Le premier instant vient avant le deuxieme.\n");
        } else if (h1 > h2) 
            printf("Le deuxieme instant vient avant le premier.\n");
        
    }
    return 0;
}