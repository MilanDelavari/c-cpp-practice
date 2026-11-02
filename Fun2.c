#include <stdio.h>

int add_bonus(int xp) {
    xp = xp + 50;
    return xp;
}

int main (void) {
    int xp = 100;
    xp = add_bonus(xp);
    printf("%d\n", xp);
    return 0;
}