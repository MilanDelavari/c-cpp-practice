#include <stdio.h>
int main(void) {
   char hero = 'A';
   int level = 5;
   float hp = 87.5;
   int xp = 250;
   printf("Hero: %c | Level: %d | HP: %.1f, then  XP: %d",hero, level,hp, xp);
   printf("full groups of %d", xp / 100);
   printf("what is left over: %d\n", xp % 100);
    return 0;
}