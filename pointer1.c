#include <stdio.h>

int main() {
    int n = 5;

    printf("%d\n", &n);

    int *ptr = &n;

    printf("%d\n", ptr);
    printf("%d\n", *ptr);

    *ptr = 2;   
    printf("%d\n", *ptr);
}