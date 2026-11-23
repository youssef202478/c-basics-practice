#include <stdio.h>

int main() {
    int lignes, cols;

    printf("Entrez le nombre de lignes : ");
    scanf("%d", &lignes);
    printf("Entrez le nombre de colonnes : ");
    scanf("%d", &cols);

    int M[lignes][cols], T[cols][lignes];

    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < cols; j++) {
            printf("M[%d][%d] = ", i, j);
            scanf("%d", &M[i][j]);
            T[j][i] = M[i][j];
        }
    }

    printf("\nTransposee de la matrice :\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < lignes; j++) {
            printf("%d\t", T[i][j]);
        }
        printf("\n");
    }

    return 0;
}