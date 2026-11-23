#include <stdio.h>

int main() {
    int n;
    long long produit_scalaire = 0;

    printf("Entrez la dimension des vecteurs : ");
    scanf("%d", &n);

    int u[n], v[n];

    printf("Saisie du vecteur U :\n");
    for (int i = 0; i < n; i++) {
        printf("U[%d] = ", i);
        scanf("%d", &u[i]);
    }

    printf("Saisie du vecteur V :\n");
    for (int i = 0; i < n; i++) {
        printf("V[%d] = ", i);
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < n; i++) {
        produit_scalaire += (long long)u[i] * v[i];
    }

    printf("Produit scalaire U . V = %lld\n", produit_scalaire);
    return 0;
}