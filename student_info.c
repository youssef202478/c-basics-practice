#include <stdio.h>
void studentinfo(char name[], int order [], int grade ){
    printf("\n----Student Information----\n");
    printf("Name: %s\n", name);
    printf("Order: %d\n", order[0]);
    printf("Grade: %d\n", grade);
}
int main (){
    char studentName[100];
    int studentOrder[1];
    int studentGrade;

    printf("Enter student name: ");
    fgets(studentName, sizeof(studentName), stdin);

    printf("Enter student order: ");
    scanf("%d", &studentOrder[0]);

    printf("Enter student grade: ");
    scanf("%d", &studentGrade);

    studentinfo(studentName, studentOrder, studentGrade);

    return 0;
}