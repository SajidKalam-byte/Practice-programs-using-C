#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float x, sum = 0, term = 1;

    printf("Input the value of x: ");
    scanf("%f", &x);
    printf("Input number of terms: ");
    scanf("%d", &n);

    printf("The values of the series:\n");
    for (i = 1; i <= n; i++) {
        term *= -1 * x * x;
        sum += term * x;
        printf("%.0f\n", term * x);
    }

    printf("\nThe sum = %.0f\n", sum);

    return 0;
}
