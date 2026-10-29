#include <stdio.h>

int main (void) {
    int xp;
    printf("Enter the number of experience points: ");
    scanf("%d", &xp);
    if (xp < 0) {
        printf("Experience points cannot be negative.\n");
        return 1;
    };
    int level = 1;
    while (xp >= (level * 100))
    {
        xp = xp - (level * 100);
        level = level + 1;
    }
    int leftover = xp;
    printf("You are at level %d and leftover is %d\n", level, leftover);
    return 0;
}