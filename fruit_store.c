#include <stdio.h>

int main() {
    int choice;
    float kg;
    float prix = 0.0;
    float total = 0.0;
    printf("=================================\n");
    printf("     WELCOME TO FRUITIFY Cmh      \n");
    printf("=================================\n\n");
    printf("Hello, in my fruit magasin, choose your fruit please!\n");
    printf("1. Apple ($1.50/kg)\n");
    printf("2. Banana ($0.75/kg)\n");
    printf("3. Orange ($0.50/kg)\n");
    printf("Enter the number of your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You chose Apple.\n");
            prix = 1.50;
            break;
        case 2:
            printf("You chose Banana.\n");
            prix = 0.75;
            break;
        case 3:
            printf("You chose Orange.\n");
            prix = 0.50;
            break;
        default:
            printf("Invalid choice.\n");
            return 1; 
    }

    printf("Please enter weight in kg (e.g. 1, 2.5, 0.5): ");
    scanf("%f", &kg);


    total = kg * prix;

    printf("The total price is: $%.2f\n", total);
    printf("\nThank you for shopping with us!\n");
    printf("Press Enter to exit...");
    getchar();
    getchar();
    return 0;
}