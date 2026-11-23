#include <stdio.h>

int main() {
    int n;
    unsigned long long fact = 1;

    printf("Entrez un entier positif : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erreur : la factorielle n'est pas definie pour un nombre negatif.\n");
    } 
    else {
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("%d! = %llu\n", n, fact);
    }

    return 0;
}