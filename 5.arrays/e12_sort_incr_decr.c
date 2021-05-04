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

void sort(int arr[], int size) {
    int i, j;
    int temp;
    for (i = 0; i < size; i++) {
        for (j = 1; j < size; j++) {
            if (arr[j - 1] > arr[j]) {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
}
void reverse_sort(int arr[], int size) {
    int i, j;
    int temp;
    for (i = 0; i < size; i++) {
        for (j = 1; j < size; j++) {
            if (arr[j - 1] < arr[j]) {
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
    sort(arr, size / 2);
    reverse_sort(arr + size / 2, size / 2);
    print_array(arr, size);
}
