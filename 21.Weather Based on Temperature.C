#include <stdio.h>

int main() {
    float temp;

    printf("Enter temperature in Centigrade: ");
    scanf("%f", &temp);

    if(temp <= 0)
        printf("Freezing Weather\n");
    else if(temp <= 10)
        printf("Very Cold Weather\n");
    else if(temp <= 20)
        printf("Cold Weather\n");
    else if(temp <= 30)
        printf("Normal Temperature\n");
    else if(temp <= 40)
        printf("Hot\n");
    else
        printf("Very Hot\n");

    return 0;
}
