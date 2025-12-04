#include <stdio.h>

#define ARR_SIZE 5

int main() {
    int array[ARR_SIZE];
    int i, j, temp;

    for (i = 0; i < ARR_SIZE; i++) {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < ARR_SIZE - 1; i++) {
        for (j = 0; j < ARR_SIZE - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }


    printf("sorted array:\n");
    for (i = 0; i < ARR_SIZE; i++) {
        printf("%d ", array[i]); 
    }

    return 0;
}
