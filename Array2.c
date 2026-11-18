#include <stdio.h>
#define ENEMIES 5

int main(void) {
    int hp[ENEMIES];
    int total_hp = 0;
    
    for (int i =0; i < ENEMIES; i++) {
        printf("Enemy %d hp: ", i + 1);
        scanf("%d", &hp[i]);
    }
    for (int i = 0; i < ENEMIES; i++) {
        
        total_hp = total_hp + hp[i];
        
    }   
    printf("Total HP is: %d\n", total_hp);
    float average_hp =  (float)total_hp / ENEMIES;
    printf("Average HP is: %.2f\n", average_hp);
    int PowerfulEnemies = 0;
    for (int i = 0; i < ENEMIES; i++) {
        if (hp[i] > average_hp) {
            Powerful_enemies++;
        }
    }
    printf("Number of powerful enemies: %d\n", Powerful_enemies);
    int max_hp = hp[0];
    for (int i = 1; i < ENEMIES; i++) {
        
        if (hp[i] > max_hp) {
            max_hp = hp[i];
        }
    }
    printf("Maximum HP is: %d\n", max_hp);
    return 0;
}