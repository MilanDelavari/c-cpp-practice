#include <stdio.h>

int main() {
    int xp;
    printf("Enter your xp: ");
    scanf("%d", &xp);
    int level = xp / 100;
    printf("the level is %d\n", level);
    
    if (level >= 5) {
        printf("need %d, veteran", 100 - (xp % 100));
    } else {
        printf("need %d, rookie", 100 - (xp % 100));
    }
    return 0;
}
