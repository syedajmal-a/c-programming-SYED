#include <stdio.h>

int main() {
    int matrix[3][3];

    // Read 9 integers row-wise
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the matrix in 3 rows
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d", matrix[i][j]);
            if (j < 2) {
                printf(" "); // space between elements
            }
        }
        printf("\n"); // new line after each row
    }

    return 0;
}
