#include <stdio.h>

int main() {
    int rows;

    printf("Input number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            int coefficient = 1;
            for (int k = 0; k <= j; k++) {
                coefficient = coefficient * (i - k) / (k + 1);
            }
            printf("%d ", coefficient);
        }
        printf("\n");
    }

    return 0;
}
