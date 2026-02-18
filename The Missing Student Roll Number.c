#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);

    int arr[10000];
    long long sum = 0;

    for(int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    long long total = (long long)n * (n + 1) / 2;

    printf("%lld", total - sum);

    return 0;
}
