#include <stdio.h>

int main() {
    int decimal, hexadecimal = 0, i = 1;

    printf("Input any Decimal number: ");
    scanf("%d", &decimal);

    while (decimal != 0) {
        hexadecimal = hexadecimal + (decimal % 16) * i;
        decimal /= 16;
        i *= 10;
    }

    printf("The equivalent Hexadecimal Number: ");
    for (int j = i - 1; j >= 0; j--) {
        if (hexadecimal / (int)pow(10, j) < 10) {
            printf("%d", hexadecimal / (int)pow(10, j));
        } else {
            printf("%c", 'A' + hexadecimal / (int)pow(10, j) - 10);
        }
        hexadecimal %= (int)pow(10, j);
    }

    printf("\n");

    return 0;
}
