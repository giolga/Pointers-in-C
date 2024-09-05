#include <stdio.h>

int main() {
    int luckyNumbers[5];
    // printf("%d \n", luckyNumbers);
    // printf("%d \n", &luckyNumbers);
    // printf("%d \n", luckyNumbers[2]);
    // printf("%d \n", *(luckyNumbers+2));

    for(int i = 0; i < 5; i++) {
        *(luckyNumbers+i) = i;
    }

    for(int i = 0; i < 5; i++) {
        printf("%d ", *(luckyNumbers + i));
    }

    int var = 10;
    int *ptr = &var;

    printf("%d ", var);
    printf("%d ", &var);
    printf("%d ", *ptr);
    printf("%d ", ptr);
    printf("%d ", &ptr);

    *ptr = 155;
    printf("%d ", var);
    printf("%d ", &var);
    printf("%d ", *ptr);
    
    return 0;
}