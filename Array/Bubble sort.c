#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int *arr, size_t size) {
    for (size_t i = 0; i < size - 1; i++) {
        for (size_t j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    size_t size;
    printf("Enter size: ");
    scanf("%zu", &size);

    int *arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1; 
    }

    printf("Enter %zu elements:\n", size);
    for (size_t i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    bubble_sort(arr, size);

    printf("Sorted array: ");
    for (size_t i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr); 
    return 0;
}
