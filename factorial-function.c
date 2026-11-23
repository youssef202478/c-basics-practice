#include <stdio.h>

unsigned long long factorielle(int n) {
    if (n < 0) {
        return 0;
    }
    unsigned long long res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}

int main() {
    int n;
    printf("Entrez un entier positif : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erreur : la factorielle n'est pas definie pour un nombre negatif.\n");
    } else {
        printf("%d! = %llu\n", n, factorielle(n));
    }

    return 0;
}