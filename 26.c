#include <stdio.h>

int main() {
    int n, i, sum = 0, term = 1;

    printf("Input the number of terms: ");
    scanf("%d", &n);

    printf("1 + 11 + 111 + 1111 + 11111\n");

    for (i = 1; i <= n; i++) {
        sum += term;
        term *= 10;
        term += 1;
    }

    printf("The Sum is: %d\n", sum);

    return 0;
}
