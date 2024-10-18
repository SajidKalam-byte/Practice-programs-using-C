#include <stdio.h>
#include <math.h>

int main() {
    int binary, decimal = 0, i = 0;

    printf("Input the binary number: ");
    scanf("%d", &binary);

    while (binary != 0) {
        decimal += (binary % 10) * pow(2, i);
        binary /= 10;
        i++;
    }

    printf("The Binary Number: %d\n", binary);
    printf("The equivalent Decimal Number is: %d\n", decimal);

    return 0;
}
