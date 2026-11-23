#include <stdio.h>

int main() {
    int n;
    char c;

    printf("Entrez la hauteur (n) : ");
    scanf("%d", &n);
    printf("Entrez le caractere : ");
    scanf(" %c", &c);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c", c);
        }
        printf("\n");
    }

    return 0;
}