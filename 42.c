#include <stdio.h>

int main() {
    int binary, decimal = 0, power = 0;

    printf("Input a binary number: ");
    scanf("%d", &binary);

    while (binary != 0) {
        decimal += (binary % 10) * (1 << power);
        binary /= 10;
        power++;
    }

    printf("The Binary Number: %d\n", binary);
    printf("The equivalent Decimal Number: %d\n", decimal);

    return 0;
}
