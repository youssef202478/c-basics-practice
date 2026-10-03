#include <stdio.h>

int main() {
    int vehicle_type;
    float hours, fee;

    printf("=================================================\n");
    printf("Welcome to the Smart Parking Fee Calculator!\n");
    printf("=================================================\n\n");

    printf("Please select the vehicle type:\n");
    printf("1. Motorcycle ($1.00/hr)\n");
    printf("2. Car ($2.50/hr)\n");
    printf("3. Truck ($3.75/hr)\n");
    printf("Enter choice (1-3): ");
    scanf("%d", &vehicle_type);

    
    switch (vehicle_type) {
        case 1:
            fee = 1.00; 
            break;
        case 2:
            fee = 2.50; 
            break;
        case 3:
            fee = 3.75;
            break;
        default:
            printf("\nError: Invalid vehicle type selected.\n");
            return 1;
    }

    printf("Please enter the number of hours parked: ");
    scanf("%f", &hours);

    
    if (hours <= 0) {
        printf("\nError: Hours must be greater than 0.\n");
        return 1;
    }

    float total_fee = hours * fee;

    printf("\n-------------------------------------------------\n");
    printf("Total parking fee for %.2f hour(s) is: $%.2f\n", hours, total_fee);
    printf("Thank you for using the Smart Parking Fee Calculator!\n");
    printf("=================================================\n");
    printf("click here to exit the program\n");
    getchar();
    getchar();

    return 0;
}