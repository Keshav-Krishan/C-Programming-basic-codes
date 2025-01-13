#include <stdio.h>


long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}


long long nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

void main() {
    int n, r;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);

    if (n < r || n < 0 || r < 0) {
        printf("Invalid input! Ensure that n >= r and both n, r >= 0.\n");
    } else {
        printf("nCr (Combination) = %lld\n", nCr(n, r));
    }
}
