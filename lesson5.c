#include <stdio.h>

int main(void) {
    int hp= 50;
    int turn= 1;

    while(hp > 0) {
        hp = hp - 12;
        if (hp < 0) {
            hp=0;
        }
        printf("Turn %d: HP = %d\n", turn, hp);
        turn++;
        }
    printf("You survived %d turns!\n", turn - 1);
    return 0;
}