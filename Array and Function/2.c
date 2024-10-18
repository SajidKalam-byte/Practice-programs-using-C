#include <stdio.h>

int findLargest(int arr[], int n) {
    int i, max = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int n, i;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }

    int largest = findLargest(arr, n);

    printf("The largest element in the array is: %d\n", largest);

    return 0;
}
