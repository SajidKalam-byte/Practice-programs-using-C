#include <stdio.h>

int main() {
    int n, i, pos;

    printf("Input the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Input %d elements in the array in ascending order:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Input the position where to delete: ");
    scanf("%d", &pos);

    if (pos >= n || pos < 0) {
        printf("Invalid position.\n");
    } else {
        // Shift elements to the left starting from the deletion position
        for (i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        printf("The new list is:\n");
        for (i = 0; i < n - 1; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
