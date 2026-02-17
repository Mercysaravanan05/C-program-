#include <stdio.h>

int main() {
    int symptoms;

    printf("Enter number of symptoms: ");

    if(scanf("%d", &symptoms) != 1 || symptoms < 0) {
        printf("Invalid input! Please enter a valid number.\n");
        return 0;
    }

    if(symptoms >= 5)
        printf("Critical Condition - High Priority (Immediate Attention Required)\n");
    else if(symptoms >= 3)
        printf("Moderate Condition - Medium Priority (Attention Required Soon)\n");
    else
        printf("Stable Condition - Low Priority (Can Wait)\n");

    return 0;
}
