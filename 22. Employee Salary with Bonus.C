#include <stdio.h>

int main() {
    float salary, bonus, finalSalary;
    char gender;

    printf("Enter Salary: ");
    scanf("%f", &salary);

    printf("Enter Gender (M/F): ");
    scanf(" %c", &gender);

    if(gender == 'M' || gender == 'm')
        bonus = salary * 0.10;
    else if(gender == 'F' || gender == 'f')
        bonus = salary * 0.15;
    else {
        printf("Invalid Gender Input\n");
        return 0;
    }

    finalSalary = salary + bonus;

    printf("Bonus = %.2f\n", bonus);
    printf("Final Salary = %.2f\n", finalSalary);

    return 0;
}
