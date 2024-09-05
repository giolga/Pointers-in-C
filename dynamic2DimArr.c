#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols;
    scanf("%d %d", rows, cols);

    int **table = (int**) malloc(rows * sizeof(int));

    for(int i = 0; i < rows; i++) {
        table[i] = (int*) malloc(cols * sizeof(int));
    }

    for(int i = 0; i < rows; i++) {
        free(table[i]);
    }

    free(table);
    table = NULL;

    return 0;
}