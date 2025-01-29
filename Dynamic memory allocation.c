#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if ((arr = malloc(n * sizeof(int))) == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) printf("%d ", arr[i] = i + 1);
    printf("\n");

    printf("Enter the new size: ");
    scanf("%d", &n);
    if ((arr = realloc(arr, n * sizeof(int))) == NULL) {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) printf("%d ", arr[i] = i + 1);
    printf("\n");

    free(arr); 
    return 0;
}
