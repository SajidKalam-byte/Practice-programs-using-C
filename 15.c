#include <stdio.h>

int main() {
    int num, factorial = 1;

    printf("Input the number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
        printf("The Factorial of %d is: %d\n", num, factorial);
    }

    return 0;
}
