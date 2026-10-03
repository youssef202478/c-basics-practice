#include <stdio.h>
#include <string.h>

int main()
{
    int num;
    char name[50];
    float math, science, english, total, average;
    char grade[20];

    printf("Hello student, please enter your name: ");
    fgets(name, sizeof(name), stdin);
// Remove the newline character from the name input
    name[strcspn(name, "\n")] = 0;

    printf("Hello %s please enter your student number: " , name);
    scanf("%d", &num);

    printf("please enter your marks in math: ");
    scanf("%f", &math);

    printf("Enter your marks in science: ");
    scanf("%f", &science);

    printf("Please enter your marks in english: ");
    scanf("%f", &english);

    total = math + science + english;
    average = total / 3.0;

 if (average >= 16) {
        printf("Grade: Très Bien\n");
    } else if (average >= 14) {
        printf("Grade: Bien\n");
    } else if (average >= 12) {
        printf("Grade: Assez Bien\n");
    } else if (average >= 10) {
        printf("Grade: Passable\n");
    } else {
        printf("Grade: Rattrapage\n");
    }

   printf("\n--- Result ---\n");
    printf("Student: %s (ID: %d)\n", name, num);
    printf("Total: %.2f | Average: %.2f | ", total, average);
    
   printf("\nPress Enter to exit...");
    getchar(); 
    getchar();

    return 0;
}
