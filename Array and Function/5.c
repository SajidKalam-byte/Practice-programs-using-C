#include <stdio.h>

int main() {
    int n, i, j, count = 0;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Count duplicate elements
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                break; // Once a duplicate is found, break the inner loop
            }
        }
    }

    printf("Total number of duplicate elements found in the array is: %d\n", count);

    return 0;
}
