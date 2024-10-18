#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Input number of terms: ");
    scanf("%d", &n);

    printf("The even numbers are: ");
    for (i = 2; i <= 2 * n; i += 2) {
        printf("%d ", i);
        sum += i;
    }

    printf("\nThe Sum of even Natural Number upto %d terms: %d\n", n, sum);

    return 0;
}
