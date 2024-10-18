#include <stdio.h>

int main() {
    int n, i, j, count;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("The frequency of all elements of an array:\n");
    for (i = 0; i < n; i++) {
        count = 1; // Initialize counter for each element
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++; // Increment counter for matching elements
            }
        }
        printf("%d occurs %d times\n", arr[i], count);
    }

    return 0;
}
