#include <stdio.h>
#include <string.h>
float calculateDiscount(float price, float discountRate) {
    return price * (discountRate / 100.0f);
}

int main() {
    int mainChoice, subChoice;
    char promoCode[20];
    float price = 0.0f, quantity = 0.0f, total = 0.0f, discount = 0.0f;

    printf("=================================\n");
    printf("     Welcome TO MY Market     \n");
    printf("=================================\n\n");

    printf("Khtar l-category:\n");
    printf("1. Fruits (10%% Discount)\n");
    printf("2. Books (15%% Discount)\n");
    printf("3. Tech Products (30%% Discount)\n");
    printf("4. Food (15%% Discount)\n");
    printf("Enter choice (1-4): ");
    scanf("%d", &mainChoice);

    switch (mainChoice) {
        case 1: // FRUITS
            printf("\n--- Fruit List ---\n");
            printf("1. Apple (DH1.50 / kg)\n");
            printf("2. Banana (DH0.75 / kg)\n");
            printf("3. Orange (DH0.50 / kg)\n");
            printf("Select fruit: ");
            scanf("%d", &subChoice);

            if (subChoice == 1) {
                price = 1.50f;
            }
            else if (subChoice == 2) {
                price = 0.75f;
            }
            else if (subChoice == 3) {
                price = 0.50f;
            }
            else {
                printf("Invalid choice!\n");
                return 1;
            }

            printf("Enter weight in kg: ");
            scanf("%f", &quantity);

            total = price * quantity;
            discount = calculateDiscount(total, 10.0f);
            break;

        case 2: // BOOKS
            printf("\n--- Books List ---\n");
            printf("1. C Programming Guide (DH150.00)\n");
            printf("2. Algorithms Handbook (DH50.00)\n");
            printf("3. Tech Story Book (DH30.00)\n");
            printf("Select book: ");
            scanf("%d", &subChoice);

            if (subChoice == 1) {
                price = 150.00f;
            }
            else if (subChoice == 2) {
                price = 50.00f;
            }
            else if (subChoice == 3) {
                price = 30.00f;
            }
            else {
                printf("Invalid choice!\n");
                return 1;
            }

            printf("How many books: ");
            scanf("%f", &quantity);

            total = price * quantity;
            discount = calculateDiscount(total, 15.0f);
            break;

        case 3: // TECH PRODUCTS
            printf("\n--- Tech Products List ---\n");
            printf("1. Smartphone (DH1500.00)\n");
            printf("2. Wireless Earbuds (DH100.00)\n");
            printf("3. USB Power Bank (DH200.00)\n");
            printf("Select product: ");
            scanf("%d", &subChoice);

            if (subChoice == 1) {
                price = 1500.00f;
            }
            else if (subChoice == 2) {
                price = 100.00f;
            }
            else if (subChoice == 3) {
                price = 200.00f;
            }
            else {
                printf("Invalid choice!\n");
                return 1;
            }

            printf("How many items: ");
            scanf("%f", &quantity);

            total = price * quantity;
            discount = calculateDiscount(total, 30.0f);
            break;

        case 4: // FOOD MENU
            printf("\n--- L-Marmita & Tech Cafe Menu ---\n");
            printf("1. Breakfast (Ftor Beldi)\n");
            printf("2. Lunch (Gheda MALAKI)\n");
            printf("3. Dinner (L3cha Express)\n");
            printf("Choose meal type (1-3): ");
            scanf("%d", &subChoice);

            if (subChoice == 1) { // 1. BREAKFAST
                printf("\n--- Ftor Beldi Menu ---\n");
                printf("1. Msemen + Atay (DH 8.00)\n");
                printf("2. Harcha + raib (DH 6.00)\n");
                printf("3. Baghrir + Zid L-3ssel (DH 9.00)\n");
                printf("Select item: ");
                scanf("%d", &subChoice);

                if (subChoice == 1) { price = 8.00f; }
                else if (subChoice == 2) { price = 6.00f; }
                else if (subChoice == 3) { price = 9.00f; }
                else { printf("Invalid choice!\n"); return 1; }
            }
            else if (subChoice == 2) { // 2. LUNCH
                printf("\n--- Gheda MALAKI Menu ---\n");
                printf("1. CousCous(DH 55.00)\n");
                printf("2. Tagine  (DH 20.00)\n");
                printf("3. Tanjia(DH 50.00)\n");
                printf("Select item: ");
                scanf("%d", &subChoice);

                if (subChoice == 1) {
                     price = 55.00f; 
                    }
                else if (subChoice == 2) { 
                    price = 20.00f;
                 }
                else if (subChoice == 3) { 
                    price = 50.00f;
                 }
                else { printf("Invalid choice!\n");
                    return 1; 
                }
            }
            else if (subChoice == 3) { // 3. DINNER
                printf("\n--- L3cha Express Menu ---\n");
                printf("1. Bocadillos Tounsi (DH 25.00)\n");
                printf("2. Sandwich L-7ouma (DH 7.00)\n");
                printf("3. djaj m7mr(DH 80.00)\n");
                printf("Select item: ");
                scanf("%d", &subChoice);

                if (subChoice == 1) {
                     price = 25.00f;
                     }
                else if (subChoice == 2) {
                     price = 7.00f;
                     }
                else if (subChoice == 3) {
                     price = 80.00f; 
                    }
                else { printf("Invalid choice!\n");
                     return 1;
                     }
            }
            else {
                printf("Invalid meal choice!\n");
                return 1;
            }

            printf("How many items: ");
            scanf("%f", &quantity);
            total = price * quantity;
            discount = calculateDiscount(total, 15.0f);
            break;

        default:
            printf("Invalid category selection!\n");
            return 1;
    }

    printf("\n---------------------------------\n");
    printf("Wach 3andk code promo? khmm fl code o ktbo  wlla 0 ila ma3andkch): ");
    scanf("%s", promoCode);

    if (strcmp(promoCode, "CMH210Y") == 0) { 
        float extraDiscount = total * 0.10f;
        discount += extraDiscount;
        printf(" Mabrouk! Ttbai9 10%% dyal code promo (CMH210Y) 3la l-mablagh!\n");
    } 
    else if (strcmp(promoCode, "TECH1337") == 0) { 
        float extraDiscount = total * 0.20f;
        discount += extraDiscount;
        printf("Wili wili! Rak hacker, ttbai9 20%% dyal code promo (TECH1337)!\n");
    }
    else if (strcmp(promoCode, "0") == 0) {
        printf("Ma3lina, la code promo khawi.\n");
    }
    else {
        printf(" Code promo ghalat!\n");
    }

    printf("\n=================================\n");
    printf("Total initial : $%.2f\n", total);
    printf("Remise (Discount) : -$%.2f\n", discount);
    printf("Total a payer : $%.2f\n", total - discount);
    printf("=================================\n");

    printf("\nPress Enter to exit...");
    getchar();
    getchar();

    return 0;
}