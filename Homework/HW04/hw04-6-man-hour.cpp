#include <stdio.h>

int main()
{
    char Eidstr[11];
    float WorkHr, S;
    int i;

    printf("Input the Employees ID(Max. 10 chars): \n");
    scanf("%10s", Eidstr);

    printf("Input the working hrs: \n");
    scanf("%f", &WorkHr);

    printf("Salary amount/hr: \n");
    scanf("%f", &S);

    float salary = WorkHr * S;

    printf("Expected Output:\n");
    printf("Employees ID = %s\n", Eidstr);

    int temp = 1, comma_count = 0;
    int salary_int = (int)salary; // Extracting the integer part of the salary

    // Count the number of digits in the integer part of the salary
    int temp_salary = salary_int;
    while (temp_salary > 0)
    {
        temp_salary /= 10;
        comma_count++;
    }

    for (i = 1; i < comma_count; i++)
    {
        temp *= 10;
    }
    printf("Salary = U$ ");
    i = 0; // Resetting the loop counter
    while (temp > 0)
    {
        printf("%d", salary_int / temp);
        salary_int %= temp;
        temp /= 10;
        i++;

        if (i < comma_count && i % 3 == 0)
        {
            printf(",");
        }
    }
    printf(".00");

    return 0;
}