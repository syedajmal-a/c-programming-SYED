#include <stdio.h>

// Swap function using pass by value
void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    printf("After Swap: %d %d\n", x, y);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("Before Swap: %d %d\n", a, b);

    swap(a, b);  // Swap attempt using pass by value

    return 0;
}
