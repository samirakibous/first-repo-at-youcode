#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    double delta, sq;
    double x1, x2;

    printf("Entrez les coefficients a, b et c de l'equation ax^2 + bx + c = 0:\n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);
    delta=pow(b,2)+4*a*c;
    if(delta>0){
    	sq=sqrt(delta);
    	x1 = (-b + sq) / (2 * a);
        x2 = (-b - sq) / (2 * a);
        printf("Les racines reelles  sont : %f et %f\n", x1, x2);
            } else if (delta == 0) {
       
        x1 = -b / (2 * a);
        printf("La racine est : %f\n", x1);
    } else {
        printf("Il n'y a pas de racines reelles\n");
    }

    return 0;

	}
    
