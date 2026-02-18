#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    int *ptr = arr;  // Pointer to the first element

    for(int i = 0; i < n; i++) {
        sum += *(ptr + i);  // Access elements using pointer arithmetic
    }

    printf("%d", sum);

    return 0;
}
