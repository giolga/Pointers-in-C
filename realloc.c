#include <stdio.h>
#include <stdlib.h>

int main() {

    int *ptr, n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int)); // ptr = (int*) calloc(n, sizeof(int));

    if(ptr == NULL) {
        printf("Memory not alocated!\n");
        exit(0);
    }
    else {
        printf("Memory succesfully alocated! \n");

        for(int i = 0; i < n; i++) {
            *(ptr + i) = i + 1;
        }

        for(int i = 0; i < n; i++)
            printf("%d ", *(ptr + i));
        
        const int k = 10;

        printf("\nCalling realloc \n\n\n");
        ptr = realloc(ptr, k * sizeof(int));

        for(int i = 0; i < k; i++) 
            *(ptr + i) = i + 1;
        
        for(int i = 0; i < k; i++)
            printf("%d ", *(ptr + i));
    }

    return 0;
}