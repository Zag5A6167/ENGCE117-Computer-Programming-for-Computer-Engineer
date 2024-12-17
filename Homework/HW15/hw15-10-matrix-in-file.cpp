#include <stdio.h>

#define MAX_ROW 10
#define MAX_COL 10

void readMatrix(FILE *fp, int matrix[][MAX_COL], int *row, int *col) {
    fscanf(fp, "%*s %*s %*s\n"); // Skip header row
    fscanf(fp, "%d %d", row, col);
    for (int i = 0; i < *row; i++) {
        for (int j = 0; j < *col; j++) {
            fscanf(fp, "%d", &matrix[i][j]);
        }
    }
}

void multiplyMatrices(int A[][MAX_COL], int B[][MAX_COL], int result[][MAX_COL], int rowsA, int colsA, int colsB) {
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < colsA; ++k) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void printMatrix(int matrix[][MAX_COL], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[MAX_ROW][MAX_COL], B[MAX_ROW][MAX_COL], result[MAX_ROW][MAX_COL];
    int rowsA, colsA, rowsB, colsB;

    FILE *fp1 = fopen("a15-10.txt", "r");
    FILE *fp2 = fopen("b15-10.txt", "r");

    if (fp1 == NULL || fp2 == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    readMatrix(fp1, A, &rowsA, &colsA);
    readMatrix(fp2, B, &rowsB, &colsB);

    if (colsA != rowsB) {
        printf("Cannot multiply matrices. Number of columns of A must be equal to the number of rows of B.\n");
        return 1;
    }

    multiplyMatrices(A, B, result, rowsA, colsA, colsB);

    printf("Matrix A from file1 =\n");
    printMatrix(A, rowsA, colsA);

    printf("Matrix B from file2 =\n");
    printMatrix(B, rowsB, colsB);

    printf("Result of A x B =\n");
    printMatrix(result, rowsA, colsB);

    fclose(fp1);
    fclose(fp2);

    return 0;
}