#include <stdio.h>

int main() {
    int n, i, pos, value;

    printf("Input the size of array: ");
    scanf("%d", &n);

    int arr[n + 1]; // Allocate space for one extra element

    printf("Input %d elements in the array in ascending order:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Input the value to be inserted: ");
    scanf("%d", &value);

    printf("Input the Position, where the value to be inserted: ");
    scanf("%d", &pos);

    if (pos > n || pos < 0) {
        printf("Invalid position.\n");
    } else {
        // Shift elements to the right starting from the insertion position
        for (i = n - 1; i >= pos; i--) {
            arr[i + 1] = arr[i];
        }

        // Insert the value at the specified position
        arr[pos] = value;

        printf("The current list of the array:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        printf("After Insert the element the new list is:\n");
        for (i = 0; i <= n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
