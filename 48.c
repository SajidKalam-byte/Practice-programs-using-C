#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int isStrong(int num) {
    int originalNum = num, remainder, sum = 0;

    while (num != 0) {
        remainder = num % 10;
        sum += factorial(remainder);
        num /= 10;
    }

    return sum == originalNum;
}

int main() {
    int start, end;

    printf("Input starting range of number: ");
    scanf("%d", &start);
    printf("Input ending range of number: ");
    scanf("%d", &end);

    printf("The Strong numbers are:\n");
    for (int i = start; i <= end; i++) {
        if (isStrong(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}
