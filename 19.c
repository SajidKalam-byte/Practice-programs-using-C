#include <stdio.h>

int main() {
    int n, i;
    float sum = 0;

    printf("Input the number of terms: ");
    scanf("%d", &n);

    printf("1/1 + 1/2 + 1/3 + 1/4 + 1/5 + ");
    for (i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    printf("\nSum of Series upto %d terms: %.6f\n", n, sum);

    return 0;
}
