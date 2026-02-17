#include <stdio.h>

int main() {
    int age;
    float price;

    printf("Enter age: ");
    scanf("%d", &age);

    if(age <= 12)
        price = 100;
    else if(age <= 19)
        price = 150;
    else if(age <= 60)
        price = 200;
    else
        price = 120;

    printf("Ticket Price = %.2f", price);

    return 0;
}
