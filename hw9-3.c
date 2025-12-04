#include <stdio.h>

int main() {
    double matrixA[2][3];
    double matrixB[3][2];
    double result[2][2];
    
    printf("Enter first matrix (3 x 2)\n");
    printf("and second matrix (2 x 3)\n");
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%lf", &matrixA[i][j]);
        }
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%lf", &matrixB[i][j]);
        }
    }
    
    printf("The first matrix you entered is\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.10g ", matrixA[i][j]);
        }
        printf("\n");
    }

    printf("The second matrix you entered is\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%.10g ", matrixB[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
    
    printf("The multiplication product of matrix A and matrix B:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%.10g ", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
