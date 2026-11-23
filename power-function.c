#include <stdio.h>

long long puissance(int base, int exp) {
    long long res = 1;
    for (int i = 0; i < exp; i++) {
        res *= base;
    }
    return res;
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

    printf("%d ^ %d = %lld\n", base, exp, puissance(base, exp));
    return 0;
}