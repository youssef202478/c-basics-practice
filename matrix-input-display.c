#include <stdio.h>

int main() {
    int lignes, cols;

    printf("Entrez le nombre de lignes : ");
    scanf("%d", &lignes);
    printf("Entrez le nombre de colonnes : ");
    scanf("%d", &cols);

    int M[lignes][cols];

    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < cols; j++) {
            printf("M[%d][%d] = ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    printf("\nMatrice saisie :\n");
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}