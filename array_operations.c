#include <stdio.h>

void displayArray(int arr[], int size) {
    printf("[ ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

int main() {
    // 1. Create an array of any size with initial elements
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;

    printf("Initial Array: ");
    displayArray(arr, size);

    // 2. Insert a value into the array (e.g., insert 25 at index 2)
    int posToInsert = 2;
    int valueToInsert = 25;

    // Shift elements to the right to make space
    for (int i = size; i > posToInsert; i--) {
        arr[i] = arr[i - 1];
    }
    arr[posToInsert] = valueToInsert;
    size++;

    printf("After inserting %d at index %d: ", valueToInsert, posToInsert);
    displayArray(arr, size);

    // 3. Delete a value from the array (e.g., delete value at index 3, which is 40)
    int posToDelete = 3;

    printf("Deleting value %d at index %d...\n", arr[posToDelete], posToDelete);

    // Shift elements to the left to fill the gap
    for (int i = posToDelete; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;

    printf("Final Array after deletion: ");
    displayArray(arr, size);

    return 0;
}
