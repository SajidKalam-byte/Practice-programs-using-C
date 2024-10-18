#include <stdio.h>

int main() {
    int num1, num2, i, lcm;

    printf("Input 1st number for LCM: ");
    scanf("%d", &num1);
    printf("Input 2nd number for LCM: ");
    scanf("%d", &num2);

    // Find the maximum of the two numbers
    int max = num1 > num2 ? num1 : num2;

    // Iterate from the maximum to the product of the numbers, checking for divisibility
    for (i = max; ; i++) {
        if (i % num1 == 0 && i % num2 == 0) {
            lcm = i;
            break;
        }
    }

    printf("The LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}
