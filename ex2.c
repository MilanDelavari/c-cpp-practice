#include <stdio.h>

int main (void) {
    int num;
    printf ("Write a number: ");
    scanf ("%d", &num);
    for (int i=1; i<11; i++) {
        printf ("%d\n", num * i);
    }
    return 0;
}