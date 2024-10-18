#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float x, sum = 0, term = 1;

    printf("Input the value of x: ");
    scanf("%f", &x);
    printf("Input number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        term *= -1 * x * x;
        sum += term * x;
    }

    printf("The sum is: %.6f\n", sum);

    return 0;
}
