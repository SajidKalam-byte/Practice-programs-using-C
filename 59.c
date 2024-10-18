#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum = num, remainder, result = 0, n = 0;

    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Calculate the sum of the powers of digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Check if the number is an Armstrong number
    return result == num;
}

int main() {
    printf("Armstrong numbers from 1 to 2000:\n");
    for (int i = 1; i <= 2000; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
