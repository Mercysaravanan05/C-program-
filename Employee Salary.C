#include <stdio.h>

int main() {
    int hours;
    char gender;
    float salary = 0;

    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);

    printf("Enter hours worked: ");
    scanf("%d", &hours);

    if(hours <= 8) {
        if(gender=='M' || gender=='m')
            salary = hours * 80;
        else
            salary = hours * 60;
    }
    else {
        if(gender=='M' || gender=='m')
            salary = 8 * 80 + (hours-8) * 100;
        else
            salary = 8 * 60 + (hours-8) * 100;
    }

    printf("Total Salary = %.2f", salary);

    return 0;
}
