#include <stdio.h>
#define N 3 
void rotate90Clockwise(int matrix[N][N]) {      // Transpose the matrix
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N / 2; j++){ // Reverse the rows
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][N - j - 1];
            matrix[i][N - j - 1] = temp;
        }
    }
}
void printMatrix(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int matrix[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Original Matrix:\n");
    printMatrix(matrix);
    rotate90Clockwise(matrix);
    printf("\nMatrix after 90-degree rotation:\n");
    printMatrix(matrix);

    return 0;
}
