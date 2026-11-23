#include <stdio.h>

int main() {
    int n;
    printf("Entrez la dimension n : ");
    scanf("%d", &n);

    int I[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            I[i][j] = (i == j) ? 1 : 0;
        }
    }

    printf("\nMatrice unitaire de dimension %d :\n", n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", I[i][j]);
        }
        printf("\n");
    }

    return 0;
}