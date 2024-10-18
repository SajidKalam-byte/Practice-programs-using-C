#include <stdio.h>

int main() {
    int octal, decimal = 0, i = 0, binary = 0, j = 1;

    printf("Input an octal number (using digit 0 - 7): ");
    scanf("%d", &octal);

    // Convert octal to decimal
    while (octal != 0) {
        decimal += (octal % 10) * pow(8, i);
        octal /= 10;
        i++;
    }

    // Convert decimal to binary
    while (decimal != 0) {
        binary += (decimal % 2) * j;
        decimal /= 2;
        j *= 10;
    }

    printf("The Octal Number: %d\n", octal);
    printf("The equivalent Binary Number: %d\n", binary);

    return 0;
}
