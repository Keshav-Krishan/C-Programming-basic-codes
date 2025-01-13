#include<stdio.h>
int main () {
/*    int A[10], i;
    printf("Enter 10 elements in the Array: ");
    for (i = 0; i < 10; i++)
    scanf("%d", &A[i]);
    printf("Element: \n");
    for(i=0; i<10; i++)
    printf("%d", A[i]);
    return 0; */
    

    int A[100], i, n, sum = 0;
    float avg;

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

    // Calculating the sum of the elements
    for (i = 0; i < n; i++) {
        sum += A[i]; // Accumulate the sum
    }

    // Calculating the average
    avg = (float)sum / n; // Cast sum to float for accurate division

    // Display the sum and average
    printf("\nSum of elements: %d\n", sum);
    printf("Average of elements: %.2f\n", avg);

    return 0;
}