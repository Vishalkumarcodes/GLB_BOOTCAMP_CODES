#include <stdio.h>
void SnakePattern(int n, int matrix[n][n]) {
    int num = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = num++;
            }
        }
         else {
            for (int j = n - 1; j >= 0; j--) {
                matrix[i][j] = num++;
            }
        }
    }
}
void printMatrix(int n, int matrix[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int n = 5; 
    int matrix[n][n];
    SnakePattern(n, matrix);
    printMatrix(n, matrix);
    return 0;
}
        