#include <stdio.h>

int isPerfect(int num) {
    int i, sum = 0;

    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return sum == num;
}

void printPerfectNumbers(int start, int end) {
    printf("The perfect numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++) {
        if (isPerfect(i)) {
            printf("%d ", i);
        }
    }
}

int main() {
    int start, end;

    printf("Input lowest search limit of perfect numbers: ");
    scanf("%d", &start);
    printf("Input highest search limit of perfect numbers: ");
    scanf("%d", &end);

    printPerfectNumbers(start, end);

    return 0;
}
