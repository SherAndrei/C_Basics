#include <stdio.h>

int init_array(int arr[], int size) {
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    return 0;
}

int shift_left(int arr[], int size, int shift) {
    for (int i = shift; i < size; i++)
        printf("%d ", arr[i]);
    for (int i = 0; i < shift; i++)
        printf("%d ", arr[i]);
    return 0;
}

int shift_right(int arr[], int size, int shift) {
    for (int i = size - shift; i < size; i++)
        printf("%d ", arr[i]);
    for (int i = 0; i < size - shift; i++)
        printf("%d ", arr[i]);
    return 0;
}

int main() {
    const int size = 12;
    int arr[size];
    init_array(arr, size);
    shift_right(arr, size, 4);
}
