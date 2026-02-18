#include <stdio.h>

int main() {
    int A[3][3], B[3][3], C[3][3];

    // Read first 3x3 matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Read second 3x3 matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Compute subtraction: C = A - B
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }

    // Print result in matrix format
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d", C[i][j]);
            if (j < 2) printf(" "); // space between elements
        }
        printf("\n"); // new line after each row
    }

    return 0;
}
