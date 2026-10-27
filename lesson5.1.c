#include <stdio.h>

int main (void) {
int xp;
printf("enter your xp: ");
scanf("Whats your xp level? %d", &xp);
int level;
level = xp / 100;
if (level >= 0) {
    for (int i = 1; i <= level; i++) {
    printf("You are level %d\n", i);
};
}
else {
    printf("You must write a valid xp level.\n");
};
printf ("Final level: %d\n", level); 
    return 0;
};