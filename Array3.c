#include <stdio.h>

int main() {
    int A[100], i, n, target, found = 0;

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

    // Prompting the user to enter the number to search
    printf("Enter the number to search: ");
    scanf("%d", &target);

    // Searching for the target number in the array
    for (i = 0; i < n; i++) {
        if (A[i] == target) {
            printf("Number %d found at position %d (index %d).\n", target, i + 1, i);
            found = 1; // Mark as found
            break;     // Exit the loop once the number is found
        }
    }

    // If the number is not found
    if (!found) {
        printf("Number %d not found in the Array.\n", target);
    }

    return 0;
}
