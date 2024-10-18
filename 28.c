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

int main() {
    int start, end;

    printf("Input the starting range or number: ");
    scanf("%d", &start);
    printf("Input the ending range of number: ");
    scanf("%d", &end);

    printf("The Perfect numbers within the given range: ");
    for (int i = start; i <= end; i++) {
        if (isPerfect(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}
