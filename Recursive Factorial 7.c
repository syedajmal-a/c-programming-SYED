#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if(n == 0 || n == 1)  // Base case: 0! = 1, 1! = 1
        return 1;
    return n * factorial(n - 1);  // Recursive step
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d", factorial(n));

    return 0;
}
