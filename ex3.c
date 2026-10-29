#include <stdio.h>

int main(void) {
    int num;
    int sum = 0;
    printf("write a number: ");
    scanf("%d", &num);
    if (num < 1) {
    printf("The number must be at least 1.\n");
    return 1;
};
    for (int i = 1; i <= num; i++) {
        sum = sum + i;
    }
    printf("The sum is: %d\n", sum);
    return 0;
}