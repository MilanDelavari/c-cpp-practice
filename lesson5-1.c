#include <stdio.h>

int main (void) {
int xp;
printf("enter your xp: ");
scanf("%d", &xp);
int level;
if (xp < 0) {
    printf("You must write a valid xp level.\n");
    return 1;
}

level = xp / 100;
    for (int i = 1; i <= level; i++) {
    printf("You are level %d\n", i);
};
printf ("Final level: %d\n", level);
    return 0;
};