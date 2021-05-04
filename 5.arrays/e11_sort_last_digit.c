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

void sort_last_digit(int arr[], int size) {
    int i, j;
    int temp;
    for (i = 0; i < size; i++) {
        for (j = 1; j < size; j++) {
            if (arr[j - 1] % 10 > arr[j] % 10) {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
}

int main() {
    const int size = 10;
    int arr[size];
    init_array(arr, size);
    sort_last_digit(arr, size);
    print_array(arr, size);
}
