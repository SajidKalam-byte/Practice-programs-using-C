#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Input the number of terms: ");
    scanf("%d", &n);

    printf("The square natural upto %d terms are: ", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i * i);
        sum += i * i;
    }

    printf("\nThe Sum of Square Natural Number upto %d terms = %d\n", n, sum);

    return 0;
}
