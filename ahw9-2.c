#include <stdio.h>

int main() {
    int array[4];
    int i, j, temp;
    
    for (i = 0; i < 4; i++) {
        scanf("%d", &array[i]);
    }
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < 4; i++) {
        if (i > 0) printf(" ");
        printf("%d", array[i]);
    }
    printf("\n");
    
    return 0;
}
