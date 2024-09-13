#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    printf("Veuillez saisir un nombre :\n");
    scanf("%d", &n);
    printf("Les diviseurs de %d sont :\n", n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
