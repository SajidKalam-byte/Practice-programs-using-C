#include <stdio.h>

int main() {
    int n;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];

    printf("Input %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d: ", i);
        scanf("%d", &arr1[i]);
    }

    printf("The elements stored in the first array are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    // Copy elements from arr1 to arr2
    for (int i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    printf("The elements copied into the second array are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
