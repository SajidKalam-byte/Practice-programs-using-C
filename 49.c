#include <stdio.h>

int main() {
    int start, n, commonDiff, sum = 0, term;

    printf("Input the starting number of the A.P. series: ");
    scanf("%d", &start);
    printf("Input the number of items for the A.P. series: ");
    scanf("%d", &n);
    printf("Input the common difference of A.P. series: ");
    scanf("%d", &commonDiff);

    printf("The Sum of the A.P. series are:\n");
    term = start;
    for (int i = 1; i <= n; i++) {
        printf("%d ", term);
        sum += term;
        term += commonDiff;
    }

    printf("= %d\n", sum);

    return 0;
}
