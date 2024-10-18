#include <stdio.h>

int main() {
    int n, i;

    printf("Input the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Input %d elements in the array (value must be <9999):\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }

    int smallest = arr[0], secondSmallest = 9999; // Initialize secondSmallest to a large value

    for (i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    printf("The Second smallest element in the array is: %d\n", secondSmallest);

    return 0;
}
