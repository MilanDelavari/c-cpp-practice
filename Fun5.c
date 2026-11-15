#include <stdio.h>

int xp_for_level(int level)
{
    int xp = 0;
    for (int i = 1; i < level; i++)
    {
        xp = xp + (i * 100);
    }
    return xp;
}

int main(void)
{
    int level;
    printf("Enter your level: ");
    scanf("%d", &level);

    int xp = xp_for_level(level);
    printf("To reach level %d you need %d XP.\n", level, xp);

    return 0;
}