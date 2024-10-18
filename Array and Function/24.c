#include <stdio.h>

int main() {
    int size;

    printf("Input the size of the square matrix: ");
    scanf("%d", &size);

    int matrix[size][size], sum = 0;

    printf("Input elements in the first matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe matrix is:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Calculate the sum of the left diagonal
    for (int i = 0; i < size; i++) {
        sum += matrix[i][i];
    }

    printf("\nAddition of the left Diagonal elements is: %d\n", sum);

    return 0;
}
