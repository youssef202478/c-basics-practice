#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_number, guess, attempts = 0;

    // Seed the random number generator
    srand(time(NULL));
    secret_number = rand() % 100 + 1; // Random number between 1 and 100

    printf("=== Number Guessing Game ===\n");
    printf("I have picked a number between 1 and 100. Try to guess it!\n\n");

    // Loop until the correct number is guessed
    while (guess != secret_number) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secret_number) {
            printf("Too high! Try lower.\n\n");
        } else if (guess < secret_number) {
            printf("Too low! Try higher.\n\n");
        } else {
            printf("\n🎉 Congratulations! You guessed it in %d attempts.\n", attempts);
        }
    }

    return 0;
}