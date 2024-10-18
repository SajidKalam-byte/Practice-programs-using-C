#include <stdio.h>

int main() {
    int decimal, octal = 0, i = 1;

    printf("Enter a number to convert: ");
    scanf("%d", &decimal);

    while (decimal != 0) {
        octal = octal + (decimal % 8) * i;
        decimal /= 8;
        i *= 10;
    }

    printf("The Octal of %d is %d.\n", decimal, octal);

    return 0;
}
