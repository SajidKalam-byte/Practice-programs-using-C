#include <stdio.h>

int main() {
    int num, reversed = 0;

    printf("Input a number: ");
    scanf("%d", &num);

    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    printf("The number in reverse order is: %d\n", reversed);

    return 0;
}
