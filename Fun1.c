#include <stdio.h>

int calculate_level(int xp) {
    int level = 1;
    while (xp >= level * 100) {
        xp = xp - level * 100;
        level++;
    }
    return level;
}

int main(void) {
 int xp;
 printf("Enter experience points: ");
 scanf("%d", &xp);
 if (xp < 0) {
    printf("Experience points cannot be negative.\n");
    return 1;
};
 int level = calculate_level(xp);
 printf("xp in main: %d\n", xp);
 printf("Level: %d\n", level);
    return 0;
}