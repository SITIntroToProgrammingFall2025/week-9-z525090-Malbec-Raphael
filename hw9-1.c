#include <stdio.h>

int main() {
    double matrix[2][2];
    double determinant;
    
    printf("Enter 2 x 2 matrix\n");
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%lf", &matrix[i][j]);
        }
    }
    
    printf("You entered\n");
    printf("%.0f %.0f\n", matrix[0][0], matrix[0][1]);
    printf("%.0f %.0f\n", matrix[1][0], matrix[1][1]);
    
    determinant = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
    
    printf("Determinant is %.6f\n", determinant);
    
    return 0;
}

