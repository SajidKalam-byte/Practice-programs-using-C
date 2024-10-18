#include <stdio.h>

int main() {
    int num1, num2, i, hcf = 1;

    printf("Input 1st number for HCF: ");
    scanf("%d", &num1);
    printf("Input 2nd number for HCF: ");
    scanf("%d", &num2);

    for (i = 1; i <= num1 && i <= num2; ++i) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }

    printf("HCF of %d and %d is: %d\n", num1, num2, hcf);

    return 0;
}
