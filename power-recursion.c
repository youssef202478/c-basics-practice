#include <stdio.h>

long long puissance_rec(int base, int exp) {
    if (exp == 0)
        return 1;
    return base * puissance_rec(base, exp - 1);
}

int main() {
    int base, exp;
    printf("Entrez la base : ");
    scanf("%d", &base);
    printf("Entrez l'exposant (>= 0) : ");
    scanf("%d", &exp);

    if (exp < 0) {
        printf("Erreur : l'exposant doit etre positif ou nul (>= 0).\n");
        return 1;
    }

    printf("%d ^ %d = %lld\n", base, exp, puissance_rec(base, exp));
    return 0;
}