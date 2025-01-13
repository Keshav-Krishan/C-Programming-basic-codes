#include <stdio.h>
int main() {
    int rows = 2, cols = 3;
    int matrix1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int matrix2[2][3] = {{7, 8, 9}, {10, 11, 12}};
    int sum[2][3];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("Sum of the matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
