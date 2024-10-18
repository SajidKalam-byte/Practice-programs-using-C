#include <stdio.h>

int main() {
    int decimal, binary = 0, i = 1;

    printf("Input a decimal number: ");
    scanf("%d", &decimal);

    while (decimal != 0) {
        binary = binary + (decimal % 2) * i;
        decimal /= 2;
        i *= 10;
    }

    printf("Binary number equivalent to said decimal number is: %032d\n", binary);

    return 0;
}
