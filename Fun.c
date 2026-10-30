#include <stdio.h>

int calculate_damage (int attack, int defense) {
    int damage = attack - defense;
    if (damage < 0) {
        damage = 0; // Ensure damage is not negative
    }
    return damage;  
}
int main(void) {
    int hp = 100; // Initial health points
    hp = hp - calculate_damage(30, 20); // Example attack and defense values
    printf("Remaining health: %d\n", hp);
    return 0;
}