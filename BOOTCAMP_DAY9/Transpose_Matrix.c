#include <stdio.h>

int main() {
    int m, n, i, j;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n); 
    int matrix[m][n], transpose[n][m];
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("The transpose of the matrix is:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
