#include <stdio.h>

int main() {
    int octal, decimal = 0, i = 0;

    printf("Input an octal number (using digit 0 - 7): ");
    scanf("%d", &octal);

    while (octal != 0) {
        decimal += (octal % 10) * pow(8, i);
        octal /= 10;
        i++;
    }

    printf("The Octal Number: %d\n", octal);
    printf("The equivalent Decimal Number: %d\n", decimal);

    return 0;
}
