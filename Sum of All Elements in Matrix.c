#include <stdio.h>

int main() {
    int matrix[3][3];
    int sum = 0;

    // Read 9 integers into the matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; // accumulate sum while reading
        }
    }

    // Print the sum
    printf("%d\n", sum);

    return 0;
}
