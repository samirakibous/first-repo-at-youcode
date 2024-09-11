#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int jourIndex;
     
    srand(time(NULL));
    jourIndex = rand() % 7;
    if (jourIndex == 0) {
        printf("Lundi\n");
    } else if (jourIndex == 1) {
        printf("Mardi\n");
    } else if (jourIndex == 2) {
        printf("Mercredi\n");
    } else if (jourIndex == 3) {
        printf("Jeudi\n");
    } else if (jourIndex == 4) {
        printf("Vendredi\n");
    } else if (jourIndex == 5) {
        printf("Samedi\n");
    } else if (jourIndex == 6) {
        printf("Dimanche\n");
    }

    return 0;
}

