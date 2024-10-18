#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;

    printf("Input a string: ");
    scanf("%s", str);

    while (str[length] != '\0') {
        length++;
    }

    printf("The string contains %d number of characters.\n", length);
    printf("So, the length of the string %s is: %d\n", str, length);

    return 0;
}
