#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Input number of terms: ");
    scanf("%d", &n);

    printf("The odd numbers are: ");
    for (i = 1; i <= 2 * n - 1; i += 2) {
        printf("%d ", i);
        sum += i;
    }

    printf("\nThe Sum of odd Natural Number upto %d terms: %d\n", n, sum);

    return 0;
}
