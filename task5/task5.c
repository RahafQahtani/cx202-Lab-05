#include <stdio.h>

// Takes input for matrix A and vector x from the user
void input_matrix_vector(int rows, int cols, double A[rows][cols], double x[cols]) {
    printf("Enter the elements of matrix A:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%lf", &A[i][j]);
        }
    }

    printf("Enter the elements of vector x:\n");
    for (int i = 0; i < cols; i++) {
        printf("x[%d]: ", i);
        scanf("%lf", &x[i]);
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows in matrix A: ");
    scanf("%d", &rows);
    printf("Enter the number of columns in matrix A (size of vector x): ");
    scanf("%d", &cols);

    //
    double A[rows][cols];
    double x[cols];
    double output[rows];

    // Take input for matrix A and vector x
    input_matrix_vector(rows, cols, A, x);

    // Compute matrix-vector multiplication
    for (int i = 0; i < rows; i++) {
        output[i] = 0;
        for (int j = 0; j < cols; j++) {
            output[i] += A[i][j] * x[j];
        }
    }

    
    printf("Resulting matrix (y = A * x):\n");
    for (int i = 0; i < rows; i++) {
        printf("output[%d] = %.2f\n", i, output[i]);
    }

    return 0;
}

