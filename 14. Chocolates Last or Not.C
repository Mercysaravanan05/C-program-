#include <stdio.h>

int main() {
    int total, perDay, days;

    printf("Enter total chocolates, consumption per day, planned days: ");
    scanf("%d%d%d", &total, &perDay, &days);

    if(total >= perDay * days)
        printf("1");
    else
        printf("0");

    return 0;
}
