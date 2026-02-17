#include <stdio.h>

int main() {
    float investment, purchasePrice, currentPrice;
    float shares, profitLoss;

    printf("Enter Initial Investment Amount: ");
    scanf("%f", &investment);

    printf("Enter Stock Purchase Price: ");
    scanf("%f", &purchasePrice);

    printf("Enter Current Stock Price: ");
    scanf("%f", &currentPrice);

    shares = investment / purchasePrice;
    profitLoss = shares * (currentPrice - purchasePrice);

    if(profitLoss > 0)
        printf("Profit = %.2f\n", profitLoss);
    else if(profitLoss < 0)
        printf("Loss = %.2f\n", -profitLoss);
    else
        printf("No Profit No Loss\n");

    return 0;
}
