#include <stdio.h>
void main() {
    int array1[] = {1, 2, 3};
    int n1 = 3;
    int array2[] = {4, 5, 6};
    int n2 = 3;
    int merged_array[6];
    for (int i = 0; i < n1; i++) {
        merged_array[i] = array1[i];
    }
    for (int i = 0; i < n2; i++) {
        merged_array[n1 + i] = array2[i];
    }
    printf("Merged Array: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged_array[i]);
    }
}
