#include <stdio.h>

int init_array(int arr[], int size) {
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    return 0;
}

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

int arg_minmax(int arr[], int size, int* argmin, int* argmax) {
    if (size == 0)
        return -1;
    int min = arr[0], max = arr[0];
    int min_pos = 0, max_pos = 0;
    for (int i = 1; i < size; i++) {
        if (min > arr[i]) {
            min = arr[i];
            min_pos = i;
        }
        if (max < arr[i]) {
            max = arr[i];
            max_pos = i;
        }
    }

    *argmin = min_pos;
    *argmax = max_pos;
}

void swap(int *lhs, int *rhs) {
    int temp = *lhs;
    *lhs = *rhs;
    *rhs = temp;
}

int main() {
    const int size = 10;
    int arr[size];
    int argmin, argmax;
    init_array(arr, size);
    arg_minmax(arr, size, &argmin, &argmax);
    swap(arr + argmin, arr + argmax);
    print_array(arr, size);
}
