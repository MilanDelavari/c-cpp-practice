#include <stdio.h>

int main (void) {
    int num;
    printf ("Write a number: ");
    scanf ("%d", &num);
    for (int i=1; i<11; i++) {
        printf ("%d x %d = %d\n", num, i, num * i);
    }
    return 0;
}