#include <stdio.h>

// Function declarations (Prototypes)
float celsius_to_fahrenheit(float c);
float fahrenheit_to_celsius(float f);
float kilometers_to_meters(float km);

int main() {
    int choice;
    float value, result;

    printf("=== Modular Unit Converter ===\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Kilometers to Meters\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &value);
            result = celsius_to_fahrenheit(value);
            printf("Result: %.2f °F\n", result);
            break;
        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &value);
            result = fahrenheit_to_celsius(value);
            printf("Result: %.2f °C\n", result);
            break;
        case 3:
            printf("Enter distance in Kilometers: ");
            scanf("%f", &value);
            result = kilometers_to_meters(value);
            printf("Result: %.2f meters\n", result);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

// Function definitions
float celsius_to_fahrenheit(float c) {
    return (c * 9.0 / 5.0) + 32.0;
}

float fahrenheit_to_celsius(float f) {
    return (f - 32.0) * 5.0 / 9.0;
}

float kilometers_to_meters(float km) {
    return km * 1000.0;
}