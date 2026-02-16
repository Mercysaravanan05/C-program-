#include <stdio.h>

int main() {
    float marks, percentage;
    
    printf("Enter marks (out of 100): ");
    scanf("%f", &marks);
    
    percentage = marks;

    if (percentage >= 95)
        printf("Grade A");
    else if (percentage >= 85)
        printf("Grade B");
    else if (percentage >= 75)
        printf("Grade C");
    else if (percentage >= 65)
        printf("Grade D");
    else if (percentage >= 45)
        printf("Grade E");
    else
        printf("Grade F");

    return 0;
}
