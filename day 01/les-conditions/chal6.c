#include <stdio.h>
#include<stdio.h>
int main() {
    float nombre; 
    printf("Entrez un nombre : ");
    scanf("%f", &nombre);

    if (nombre > 0) {
        printf("Le nombre %f est positif\n", nombre);
    } else if (nombre < 0) {
        printf("Le nombre %f est negatif\n", nombre);
    } else {
        printf("Le nombre est nul\n");
    }

    return 0;
}

