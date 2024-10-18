#include <stdio.h>

int isPrime(int num) {
    int i;

    if (num <= 1) {
        return 0; // 0 and 1 are not prime
    }

    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Divisible by a number other than 1 and itself
        }
    }

    return 1; // Prime number
}

int main() {
    int num;

    printf("Input a positive number: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("The number %d is a prime number.\n", num);
    } else {
        printf("The number %d is not a prime number.\n", num);
    }

    return 0;
}
