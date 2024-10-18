#include <stdio.h>

int main() {
    int binary, octal = 0, i = 0;

    printf("Input a binary number: ");
    scanf("%d", &binary);

    while (binary != 0) {
        octal += (binary % 10) * pow(2, i);
        binary /= 10;
        i++;
    }

    // Convert decimal to octal
    int octalNumber = 0, j = 1;
    while (octal != 0) {
        octalNumber += (octal % 8) * j;
        octal /= 8;
        j *= 10;
    }

    printf("The Binary Number: %d\n", binary);
    printf("The equivalent Octal Number: %d\n", octalNumber);

    return 0;
}
