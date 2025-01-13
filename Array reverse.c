#include <stdio.h>
void main() {
    int array[] = {1, 2, 3, 4, 5};
    int n = 5;
    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\nReversed Array: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", array[i]);
    }
}
