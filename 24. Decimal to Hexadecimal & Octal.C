#include <stdio.h>

int main() {
    int num;

    printf("Enter a positive decimal integer: ");
    scanf("%d", &num);

    if(num < 0) {
        printf("Please enter a positive number.\n");
        return 0;
    }

    printf("Hexadecimal: %X\n", num);
    printf("Octal: %o\n", num);

    return 0;
}
