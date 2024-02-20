#include <stdio.h>

void updateArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            arr[i] += 5;
        } else {
            arr[i] *= 2;
        }
    }
}

void displayArray(int arr[], int size) {
    printf("Updated Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Update Array\n");
        printf("2. Display Array\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                updateArray(arr, size);
                printf("Array updated successfully.\n");
                break;
            case 2:
                displayArray(arr, size);
                break;
            case 3:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 3);

    return 0;
}
