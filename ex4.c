#include <stdio.h>

int main (void) {
    int copper, gold, silver;
    printf("Enter the number of copper coins: ");
    scanf("%d", &copper);
    gold = copper / 10000;
    copper = copper - (gold * 10000);
    silver = copper / 100;
    copper = copper - (silver * 100);
    printf("%d gold coins, %d silver coins, and %d copper coins\n", gold, silver, copper);
    return 0;
}