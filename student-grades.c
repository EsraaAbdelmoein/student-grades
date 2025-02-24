#include <stdio.h>

int main() {
    char studentName[50];
    int grade1, grade2, grade3;
    int totalMarks;
    float average;
    int continueInput = 1;
    int studentCount = 0;
    float sumOfAverages = 0;

    while (continueInput == 1) {
        printf("Enter student name: ");
        scanf("%s", studentName);

        printf("Enter grade for Subject 1: ");
        while (scanf("%d", &grade1) != 1 || grade1 < 0 || grade1 > 100) {
            printf("Invalid input! Please enter a valid number between 0 and 100: ");
            while (getchar() != '\n');
        }

        printf("Enter grade for Subject 2: ");
        while (scanf("%d", &grade2) != 1 || grade2 < 0 || grade2 > 100) {
            printf("Invalid input! Please enter a valid number between 0 and 100: ");
            while (getchar() != '\n');
        }

        printf("Enter grade for Subject 3: ");
        while (scanf("%d", &grade3) != 1 || grade3 < 0 || grade3 > 100) {
            printf("Invalid input! Please enter a valid number between 0 and 100: ");
            while (getchar() != '\n');
        }

        totalMarks = grade1 + grade2 + grade3;
        average = totalMarks / 3.0;

        printf("\nResults for %s:\n", studentName);
        printf("Total Marks: %d\n", totalMarks);
        printf("Average Marks: %.2f\n", average);

        if (average >= 50)
            printf("Status: Pass\n");
        else
            printf("Status: Fail\n");

        studentCount++;
        sumOfAverages += average;

        printf("\nDo you want to enter details for another student? (1 for Yes, 0 for No): ");
        while (scanf("%d", &continueInput) != 1 || (continueInput != 0 && continueInput != 1)) {
            printf("Invalid input! Please enter 1 for Yes or 0 for No: ");
            while (getchar() != '\n');
        }

        printf("\n");
    }

    if (studentCount > 0) {
        float classAverage = sumOfAverages / studentCount;
        printf("Final Summary:\n");
        printf("Number of students processed: %d\n", studentCount);
        printf("Class Average: %.2f\n", classAverage);
    }

    return 0;
}
