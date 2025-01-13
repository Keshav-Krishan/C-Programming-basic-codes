#include <stdio.h>

int main() {
    int A[100], i, n, max;

    // Prompting the user to input the number of elements
    printf("Enter the number of elements (up to 100): ");
    scanf("%d", &n);

    // Validating the size of the array
    if (n > 100 || n <= 0) {
        printf("Invalid size. Please enter a number between 1 and 100.\n");
        return 1;
    }

    // Input array elements
    printf("Enter %d elements in the Array: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // Displaying array elements
    printf("Elements in the Array are: \n");
    for (i = 0; i < n; i++) {
        printf("%d\n", A[i]); // Printing each element
    }

    // Finding the maximum element
    max = A[0]; // Initialize max with the first element
    for (i = 1; i < n; i++) {
        if (A[i] > max) {
            max = A[i]; // Update max if a larger element is found
        }
    }

    // Display the maximum element
    printf("\nMaximum element in the Array: %d\n", max);

    return 0;
}
