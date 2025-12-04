#include <stdio.h>

int main() {
    int array[5];
    int i, j, temp;
    
    printf("Enter 5 numbers:\n");
    
    for (i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }
    
    printf("Before sorting: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    
    printf("After sorting: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    return 0;
}
