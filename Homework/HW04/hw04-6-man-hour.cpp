#include <stdio.h>

int main() {
    char employeeID[11];
    int workingHours;
    float salaryPerHour, salary;

    // Input employee data
    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%s", employeeID);

    printf("Input the working hrs: ");
    scanf("%d", &workingHours);

    printf("Salary amount/hr: ");
    scanf("%f", &salaryPerHour);

    // Calculate salary
    salary = workingHours * salaryPerHour;

    // Output result
    printf("Expected Output:\n");
    printf("Employees ID = %s\n", employeeID);
    printf("Salary = U$ %.2f\n", salary);

    return 0;
}
