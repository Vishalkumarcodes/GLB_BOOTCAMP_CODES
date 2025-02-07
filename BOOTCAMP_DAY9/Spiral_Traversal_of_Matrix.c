#include <stdio.h>
void spiralTraversal(int m, int n, int matrix[m][n]) {
    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;
    
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            printf("%d ", matrix[top][i]);
        }
        top++;
        for (int i = top; i <= bottom; i++) {
            printf("%d ", matrix[i][right]);
        }
        right--;
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                printf("%d ", matrix[bottom][i]);
            }
            bottom--;
        } 
        if (left <= right) {
            for (int i = bottom; i >= top; i--){
                printf("%d ", matrix[i][left]);
            }
            left++;
        }
    }
}
int main() {
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    printf("Spiral Traversal of the given matrix:\n");
    spiralTraversal(4, 4, matrix); 
    return 0;
}
