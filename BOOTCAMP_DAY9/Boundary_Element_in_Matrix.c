#include <stdio.h>
#define ROWS 4
#define COLS 4
void printBoundaryElements(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++){   // Print boundary elements
            if (i == 0 || i == ROWS - 1 || j == 0 || j == COLS - 1) {
                printf("%d ", matrix[i][j]);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}
int main() {
    int matrix[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    printf("Boundary elements of the matrix:\n");
    printBoundaryElements(matrix);
    return 0;
}
