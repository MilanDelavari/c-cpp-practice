#include <stdio.h>

int main (void) {
    int cooper, gold, silver;
    printf("Enter the number of cooper coins: ");
    scanf("%d", &cooper);
    gold = cooper / 10000;
    cooper = cooper - (gold * 10000);
    silver = cooper / 100;
    cooper = cooper - (silver * 100);
    printf("%d gold coins, %d silver coins, and %d cooper coins\n", gold, silver, cooper);
    return 0;
}