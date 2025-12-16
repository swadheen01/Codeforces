#include <stdio.h>

void reverseArray(int *arr, int size) {
    int *start = arr;            // Pointer to the beginning of the array
    int *end = arr + size - 1;   // Pointer to the end of the array
    int temp;

    while (start < end) {
        // Swap the elements pointed by start and end
        temp = *start;
        *start = *end;
        *end = temp;

        // Move the pointers towards each other
        start++;
        end--;
    }
}

int main() {
    int arr[6]; // = {1, 2, 3, 4, 5, 6};
    int size = 6;//sizeof(arr) / sizeof(arr[0]);
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Original array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    reverseArray(arr, size);

    printf("Reversed array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
