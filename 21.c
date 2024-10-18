#include <stdio.h>

int main() {
    int n, i, sum = 0, term = 9;

    printf("Input the number of terms: ");
    scanf("%d", &n);

    printf("9 99 999 9999 99999\n");

    for (i = 1; i <= n; i++) {
        sum += term;
        term *= 10;
        term += 9;
    }

    printf("The sum of the series = %d\n", sum);

    return 0;
}
