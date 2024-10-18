#include <stdio.h>

int main() {
    int n, i, j = 0, k = 0;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr[n], even[n], odd[n];

    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Separate even and odd elements
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[j++] = arr[i];
        } else {
            odd[k++] = arr[i];
        }
    }

    printf("The Even elements are:\n");
    for (i = 0; i < j; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    printf("The Odd elements are:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}
