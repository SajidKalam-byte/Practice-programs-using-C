#include <stdio.h>

int main() {
    int size;

    printf("Input the size of the square matrix (less than 5): ");
    scanf("%d", &size);

    int matrix1[size][size], matrix2[size][size], result[size][size];

    printf("Input elements in the first matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Input elements in the second matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("\nThe First matrix is:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\nThe Second matrix is:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    // Multiply the matrices
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            result[i][j] = 0;
            for (int k = 0; k < size; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("\nThe multiplication of two matrix is:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
