#include   <stdio.h>
int main(void) {
int coins;
printf("Enter the number of coins: ");
scanf("%d", &coins);
int stacks = coins / 10;
int leftover = coins % 10;
int needed = 10 - leftover;
printf("Coins needed for the next stack: %d\n", needed);
if (stacks >=3) {
    printf("Rich\n");
} else {
    printf("Poor\n");
}
return 0;
}
