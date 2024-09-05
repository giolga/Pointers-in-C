#include <stdio.h>

void fun(char a) {
    printf("Value of a is %c \n", a);
}

void sum(int a, int b){
    printf("Sum of a and b is: %d", a + b);
}

int main() {
    void (*fun_ptr)(char) = &fun;//პოინტერის შემდეგ ელემენტების ტიპები ემატება

    (*fun_ptr)('a');

    void (*sum_ptr)(int, int) = &sum;

    (*sum_ptr)(3, 5);

    return 0;
}