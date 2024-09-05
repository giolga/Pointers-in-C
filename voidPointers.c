#include <stdio.h>

void printNumber(int * numberPtr) {
    printf("%d\n", *numberPtr);
}

void printLetter(char * charPtr) {
    printf("%c\n", *charPtr);
}

void print(void * ptr, char type) {
    switch (type)
    {
    case 'i':
        *((int*)ptr);
        printf("%d\n", *((int*)ptr));
        break;
    case 'c':
       printf("%c\n", *((char*)ptr));
        break;
    
    default:
        break;
    }
}

int main() {
    int number = 5;
    char letter = 'a';
    // printNumber(&number);
    // printLetter(&letter);

    print(&number, 'i');
    print(&letter, 'c');
    
    return 1;
}