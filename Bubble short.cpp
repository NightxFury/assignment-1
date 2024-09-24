Write a c program to implement bubble sort and if the elements  are already sorted then it will not work
#include <stdio.h>

// Function to check if the array is already sorted
int isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0;  // Not sorted
        }
    }
    return 1;  // Already sorted
}

// Function to implement bubble sort
void bubbleSort(int arr[], int n) {
    // Check if the array is already sorted
    if (isSorted(arr, n)) {
        printf("The array is already sorted. No sorting will be performed.\n");
        return;
    }

    // Bubble sort algorithm
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Array has been sorted using bubble sort.\n");
}

int main() {
    int n;

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the bubble sort function
    bubbleSort(arr, n);

    // Display the sorted array (if sorting was performed)
    if (!isSorted(arr, n)) {
        printf("Sorted array: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}

