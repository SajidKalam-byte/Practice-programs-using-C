#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("The first %d natural numbers are:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
        sum += i;
    }
    printf("\nThe Sum of Natural Numbers up to %d terms: %d\n", n, sum);
    return 0;
}
