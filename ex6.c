#include <stdio.h>

int main (void) {
    int secret = 555;
    int guess;
    printf("Guess the secret number: ");
    scanf("%d", &guess);
    while (guess != secret) {
        if (guess < secret) {
            printf("Low! Try again: ");
        } else {
            printf("High! Try again: ");
        }
        scanf("%d", &guess);
    }
    printf("Congratulations! You guessed the secret number.\n");
    return 0;   
}