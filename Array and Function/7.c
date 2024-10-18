#include <stdio.h>

int main() {
    int n;

    printf("Input the number of elements to be stored in the first array: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], mergedArr[2 * n];

    printf("Input %d elements in the first array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d: ", i);
        scanf("%d", &arr1[i]);
    }

    printf("Input %d elements in the second array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d: ", i);
        scanf("%d", &arr2[i]);
    }

    // Merge the arrays
    int i = 0, j = 0, k = 0;
    while (i < n && j < n) {
        if (arr1[i] >= arr2[j]) {
            mergedArr[k++] = arr1[i++];
        } else {
            mergedArr[k++] = arr2[j++];
        }
    }

    // Copy any remaining elements from arr1 or arr2
    while (i < n) {
        mergedArr[k++] = arr1[i++];
    }
    while (j < n) {
        mergedArr[k++] = arr2[j++];
    }

    printf("The merged array in descending order is:\n");
    for (int i = 0; i < 2 * n; i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");

    return 0;
}
