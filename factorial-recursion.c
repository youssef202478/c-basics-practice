#include <stdio.h>

unsigned long long factorielle_rec(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorielle_rec(n - 1);
}

int main() {
    int n;
    printf("Entrez un entier positif : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erreur : nombre negatif.\n");
    } else {
        printf("%d! = %llu\n", n, factorielle_rec(n));
    }

    return 0;
}