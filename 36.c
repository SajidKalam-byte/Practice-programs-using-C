#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        printf("1");
        for (int j = 2; j <= i - 1; j++) {
            printf("%d", j);
        }
        for (int j = i - 1; j >= 2; j--) {
            printf("%d", j);
        }
        printf("1\n");
    }

    return 0;
}
