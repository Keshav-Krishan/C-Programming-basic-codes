#include <stdio.h>

int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2; // Find the middle element

        if (arr[mid] == target) {
            return mid; // Target found at index `mid`
        } else if (arr[mid] < target) {
            low = mid + 1; // Search the right half
        } else {
            high = mid - 1; // Search the left half
        }
    }

    return -1; // Target not found
}

int main() {
    int arr[100], n, target, i, result;

    // Input the number of elements
    printf("Enter the number of elements (up to 100): ");
    scanf("%d", &n);

    // Validate the size of the array
    if (n > 100 || n <= 0) {
        printf("Invalid size. Please enter a number between 1 and 100.\n");
        return 1;
    }

    // Input array elements
    printf("Enter %d elements in sorted order: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the target element to search
    printf("Enter the number to search: ");
    scanf("%d", &target);

    // Perform binary search
    result = binarySearch(arr, n, target);

    // Output the result
    if (result != -1) {
        printf("Number %d found at position %d (index %d).\n", target, result + 1, result);
    } else {
        printf("Number %d not found in the array.\n", target);
    }

    return 0;
}
