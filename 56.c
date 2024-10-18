#include <stdio.h>

int isPrime(int num) {
    int i;

    if (num <= 1) {
        return 0;
    }

    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int num, i, j;

    printf("Input a positive integer: ");
    scanf("%d", &num);

    printf("%d = ", num);
    for (i = 2; i <= num / 2; i++) {
        if (isPrime(i) && isPrime(num - i)) {
            printf("%d + %d\n", i, num - i);
        }
    }

    return 0;
}
