#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, m;
    scanf("%d", &n);

    int a[20], b[20];

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &m);

    for(int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    int i = 0, j = 0;
    int lastPrinted = -1;  // To avoid duplicates

    while(i < n && j < m) {
        int value;

        if(a[i] < b[j]) {
            value = a[i++];
        }
        else if(a[i] > b[j]) {
            value = b[j++];
        }
        else {
            value = a[i];
            i++;
            j++;
        }

        if(value != lastPrinted) {
            printf("%d ", value);
            lastPrinted = value;
        }
    }

    while(i < n) {
        if(a[i] != lastPrinted) {
            printf("%d ", a[i]);
            lastPrinted = a[i];
        }
        i++;
    }

    while(j < m) {
        if(b[j] != lastPrinted) {
            printf("%d ", b[j]);
            lastPrinted = b[j];
        }
        j++;
    }

    return 0;
}
