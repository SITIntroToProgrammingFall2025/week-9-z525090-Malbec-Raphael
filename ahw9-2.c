#include <stdio.h>

int main() {
    int array[100];
    int n = 0;

    while (scanf("%d", &array[n]) == 1) {
        n++;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d", array[i]);
        if (i < n - 1) printf(" ");
    }
    printf("\n");

    return 0;
}
