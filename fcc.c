#include <stdio.h>
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1; 
        }

        return fibonacci(n - 1) + fibonacci(n - 2); 

int main() {
    int i, n; 
    printf("Enter the number of terms : "); 
    scanf("%d", &n);

    printf("Fibonacci Series up to %d terms :\n",n); 
    for (i = 0; i < n; i++) 
    {
        printf("%d",fibonacci); 
    }
    return 0; 
}
}