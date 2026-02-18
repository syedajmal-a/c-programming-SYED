#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);

    int arr[1000];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int half = n / 2;
    int sum1 = 0, sum2 = 0;

    for(int i = 0; i < half; i++) {
        sum1 += arr[i];
    }

    for(int i = half; i < n; i++) {
        sum2 += arr[i];
    }

    if(sum1 == sum2) {
        printf("BALANCED");
    } else {
        printf("NOT BALANCED");
    }

    return 0;
}
