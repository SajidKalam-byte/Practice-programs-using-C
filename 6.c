#include <stdio.h>

int main() {
    int num = 15;
    int i;

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
