#include <stdio.h>
int main(void) {
    char type = 'G';
    int damage = 100;
    float speed = 2.5f;
    printf("Monster %c | damage: %d | speed: %.1f\n", type, damage, speed);
    int coins = 50;
    printf("staks: %d\n", coins/10);
    printf("Left over: %d\n", coins%10);
    return 0;
}