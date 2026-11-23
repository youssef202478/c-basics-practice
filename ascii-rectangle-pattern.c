#include <stdio.h>

int main() {
    int n, m;
    char c;

    printf("Entrez le nombre de lignes (n) : ");
    scanf("%d", &n);
    printf("Entrez le nombre de colonnes (m) : ");
    scanf("%d", &m);
    printf("Entrez le caractere : ");
    scanf(" %c", &c);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%c", c);
        }
        printf("\n");
    }

    return 0;
}