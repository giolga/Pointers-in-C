#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n;

    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Entered number of elements: %d\n", n);


    ptr = (int*) malloc(n * sizeof(int));

    if(ptr == NULL) {
        printf("Memory not alocated!");
        exit(0);
    }
    else {
        printf("Memory succesfully alocated!\n");

        for(int i = 0; i < n; i++) {
            *(ptr+i) = i+1;
        }

        for(int i = 0; i < n; i++){
            printf("%d \n", *(ptr+i));
        }

        free(ptr);
    }
    return 0;
}