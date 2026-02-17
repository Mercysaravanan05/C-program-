#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    if(scanf("%d", &age)!=1 || age<0) {
        printf("Invalid input");
        return 0;
    }

    if(age <= 5)
        printf("Mashed vegetables or soft fruits");
    else if(age <= 12)
        printf("Milk and healthy snacks");
    else if(age <= 18)
        printf("Burgers or Pasta");
    else if(age <= 50)
        printf("Balanced diet with vegetables and rice");
    else
        printf("Soup or Grilled Fish");

    return 0;
}
