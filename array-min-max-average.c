#include <stdio.h>

int main() {
    int N;
    printf("Entrez la taille N du tableau : ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Erreur : la taille N doit etre strictement positive (> 0).\n");
        return 1;
    }

    int T[N];
    long long somme = 0;

    // Saisie
    for (int i = 0; i < N; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
        somme += T[i];
    }

    int min = T[0], max = T[0];

    // Affichage + Min/Max
    printf("\nElements du tableau : ");
    for (int i = 0; i < N; i++) {
        printf("%d ", T[i]);
        if (T[i] < min) min = T[i];
        if (T[i] > max) max = T[i];
    }

    double moyenne = (double)somme / N;
    printf("\nMin = %d\n", min);
    printf("Max = %d\n", max);
    printf("Moyenne = %.2lf\n", moyenne);

    return 0;
}