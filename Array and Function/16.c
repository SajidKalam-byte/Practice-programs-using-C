#include <stdio.h>

int main() {
    int n, i;

    printf("Input the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }

    int largest = arr[0], secondLargest = arr[1];

    if (largest < secondLargest) {
        int temp = largest;
        largest = secondLargest;
        secondLargest = temp;
    }

    for (i = 2; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    printf("The Second largest element in the array is: %d\n", secondLargest);

    return 0;
}
