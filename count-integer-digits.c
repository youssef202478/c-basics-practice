#include <stdio.h>

int main() {
    long long n;
    int compteur = 0;

    printf("Entrez un entier : ");
    scanf("%lld", &n);

    if (n == 0) {
        compteur = 1;
    } else {
        if (n < 0) n = -n;
        while (n > 0) {
            compteur++;
            n /= 10;
        }
    }

    printf("Nombre de chiffres : %d\n", compteur);
    return 0;
}