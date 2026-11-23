#include <stdio.h>
#include <math.h>

int main() {
    double base, exposant, resultat;

    printf("Entrez la base : ");
    scanf("%lf", &base);
    printf("Entrez l'exposant : ");
    scanf("%lf", &exposant);

    resultat = pow(base, exposant);
    printf("%.2lf ^ %.2lf = %.2lf\n", base, exposant, resultat);

    return 0;
}