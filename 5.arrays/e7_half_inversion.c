#include <stdio.h>

int init_array(int arr[], int size) {
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    return 0;
}

int inversion(int arr[], int size) {
    for (int i = size - 1; i >= 0; i--)
        printf("%d ", arr[i]);
    return 0;
}

int main() {
    const int size = 10;
    int arr[size];
    init_array(arr, size);
    inversion(arr, size / 2);
    inversion(arr + size / 2, size / 2);
}
