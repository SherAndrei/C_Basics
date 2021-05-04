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

void print_before_last_digit_is_zero(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] % 100 < 10)
            printf("%d ", arr[i]);
    }
}

int main() {
    const int size = 10;
    int arr[size];
    init_array(arr, size);
    print_before_last_digit_is_zero(arr, size);
}
