#include <stdio.h>

int sum_to(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    int result = sum_to(n);
    printf("The sum of integers from 1 to %d is: %d\n", n, result);
    return 0;
}