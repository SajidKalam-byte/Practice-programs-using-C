#include <stdio.h>

int main() {
    int num, i, sum = 0;

    printf("Input the number: ");
    scanf("%d", &num);

    printf("The positive divisors: ");
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
            sum += i;
        }
    }

    printf("\nThe sum of the divisors is: %d", sum);

    if (sum == num) {
        printf("\nSo, the number is perfect.\n");
    } else {
        printf("\nSo, the number is not perfect.\n");
    }

    return 0;
}
