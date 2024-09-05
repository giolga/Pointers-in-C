#include <stdio.h>
#define printInt(x) printf("%d\n", x)

int getMin(int arr[], int size) {
    int min = *(arr);

    for(int i = 1; i < size; i++) {
        if(*(arr+i) < min) {
            min = *(arr + i);
        }
    }

    return min;
}

int getMax(int arr[], int size) {
    int max = *(arr);

    for(int i = 1; i < size; i++) {
        if(*(arr+i) > max) {
            max = *(arr + i);
        }
    }

    return max;
}

void getMinMax(int arr[], int size, int *min, int*max) {
    for(int i = 1; i < size; i++) {
        if(arr[i] < *min) {
            *min =  arr[i];
        }
        if(arr[i] > *max) {
            *max =  arr[i];
        }
    }

}

int main() {
    int arr[5] = {5, 4, -2, 29, 6};

    // printInt(getMin(arr, 5));
    // printInt(getMax(arr, 5));
    int min = arr[0];
    int max = arr[0];
    
    getMinMax(arr, 5, &min, &max);

    printInt(min);
    printInt(max);

    return 0;
}