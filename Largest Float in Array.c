#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);

    float arr[1000];

    for(int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    float max = arr[0];   // Assume first element is largest

    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("%.2f", max);  // Print with 2 decimal places

    return 0;
}
