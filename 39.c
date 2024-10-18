#include <stdio.h>

int main() {
    int start = 100, end = 200, num, sum = 0, count = 0;

    printf("Numbers between 100 and 200, divisible by 9:\n");
    for (num = start; num <= end; num++) {
        if (num % 9 == 0) {
            printf("%d ", num);
            sum += num;
            count++;
        }
    }

    printf("\nThe sum: %d\n", sum);
    printf("Number of integers divisible by 9: %d\n", count);

    return 0;
}
