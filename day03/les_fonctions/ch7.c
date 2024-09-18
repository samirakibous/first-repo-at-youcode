#include <stdio.h>
#include <string.h>

void inverser(char *ch) {
    int l = strlen(ch);
    int i;
    char temp;

    for (i = 0; i < l / 2; i++) {
        temp = ch[i];
        ch[i] = ch[l - 1 - i];
        ch[l - 1 - i] = temp;
    }
}

int main() {
    char chaine[100];

    printf("Entrez une cha�ne de caract�res : ");
    fgets(chaine, sizeof(chaine), stdin);

    chaine[strcspn(chaine, "\n")] = '\0';

    inverser(chaine);

    printf("Chaine inversee : %s\n", chaine);

    return 0;
}

