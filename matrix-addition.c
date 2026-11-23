#include <stdio.h>

int main() {
    int lignes, cols;

    printf("Entrez le nombre de lignes : ");
    scanf("%d", &lignes);
    printf("Entrez le nombre de colonnes : ");
    scanf("%d", &cols);

    int A[lignes][cols], B[lignes][cols], S[lignes][cols];

    printf("Saisie de la matrice A :\n");
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < cols; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nSaisie de la matrice B :\n");
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < cols; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
            S[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\nSomme A + B :\n");
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", S[i][j]);
        }
        printf("\n");
    }

    return 0;
}