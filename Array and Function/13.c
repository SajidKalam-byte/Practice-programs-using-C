#include <stdio.h>

int main() {
    int n, i, j, value;

    printf("Input number of elements you want to insert (max 100): ");
    scanf("%d", &n);

    int arr[n + 1]; // Allocate space for one extra element

    printf("Input %d elements in the array in ascending order:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Input the value to be inserted: ");
    scanf("%d", &value);

    // Find the appropriate position for insertion
    i = n - 1;
    while (i >= 0 && arr[i] > value) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = value;

    printf("The existing array list is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("After Insert the list is:\n");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
