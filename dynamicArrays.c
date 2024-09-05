#include <stdio.h>
#include <stdlib.h>

int main() {
    // int myArr[5];
    int size;
    printf("Size: ");
    scanf("%d", &size);

    int *myArr = (int*)malloc(size * sizeof(int));

    for(int i = 0; i < size; i++) {
        printf("Array [%d] ", i );
        scanf("%d", &myArr[i]);
    }

    for(int i = 0; i < size; i++) {
        // printf("%d ", myArr[i]);
        printf("%d ", *(myArr+i));
        
    }

    free(myArr);
    myArr = NULL;
    
    return 0;
}