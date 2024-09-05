#include <stdio.h>

void add(int a, int b) {
    printf("The sum of a and b is: %d", a + b);
}

void substr(int a, int b) {
    printf("Substraction is: %d", a - b);
}

void multiply(int a, int b) 
{ 
    printf("Multiplication is %d\n", a*b); 
}


int main() {

    void (*fun_ptr[])(int, int) = {&add, &substr, &multiply};

    int n;
    printf("choose number between 0 and 2: ");
    scanf("%d", &n);

    (*fun_ptr[n])(10, 2);

    return 0;
}