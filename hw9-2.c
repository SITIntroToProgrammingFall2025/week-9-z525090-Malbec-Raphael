#include <stdio.h>

int main() {
    int array[3][3];
    int flipped[3][3];
    
    printf("Enter 3 x 3 array\n");
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &array[i][j]);
        }
    }
    
    printf("You entered\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            flipped[i][j] = array[i][2 - j];
        }
    }
    
    printf("Output\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", flipped[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

