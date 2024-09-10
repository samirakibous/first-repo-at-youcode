#include <stdio.h>
int main() {
    char c;
    printf("Veuillez entrer un caractere : ");
    scanf(" %c", &c);
    switch(c){
    	case 'a':
    	case 'e':
    	case 'i':
    	case 'o':
    	case 'y':
    	printf("%c est une voyelle",c);
    	break;
    	default:
        printf("%c n'est pas une voyelle", c);
        break;
}
	}
