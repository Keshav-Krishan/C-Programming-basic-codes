#include <stdio.h>

int power(int x, int n) {
    if (n == 0) { 
        return 1;
    }
    return x * power(x, n - 1);
}

int main() {
    int x = 2; 
    int result = power(x, 3); 
    printf("%d^3 = %d\n", x, result); 
    return 0;
}
