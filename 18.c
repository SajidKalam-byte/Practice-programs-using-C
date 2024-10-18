#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float x, sum = 1, term = 1;

    printf("Input the Value of x: ");
    scanf("%f", &x);
    printf("Input the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        term *= -1 * x * x / ((2 * i - 1) * (2 * i));
        sum += term;
    }

    printf("the sum = %.6f\n", sum);
    printf("Number of terms = %d\n", n);
    printf("value of x = %.6f\n", x);

    return 0;
}
