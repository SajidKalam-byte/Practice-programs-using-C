#include <stdio.h>

int hcf(int a, int b) {
    int i, hcf = 1;

    for (i = 1; i <= a && i <= b; ++i) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }

    return hcf;
}

int main() {
    int num1, num2, lcm;

    printf("Input 1st number for LCM: ");
    scanf("%d", &num1);
    printf("Input 2nd number for LCM: ");
    scanf("%d", &num2);

    lcm = (num1 * num2) / hcf(num1, num2);

    printf("The LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}
