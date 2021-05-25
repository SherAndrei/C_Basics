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

inline int abs(int a) {
    return (a < 0) ? -a : a;
}

int find_max_array(int size, int a[]) {
    if (size == 0)
        return -1;
    int max = a[0];
    for (int i = 1; i < size; i++) {
        if (max < a[i]) max = a[i];
    }
    return max;
}

int count_greater(int arr[], int size, int max) {
    int counter = 0;
    for (int i = 0; i < size; i++) {
        if (abs(arr[i]) > max)
            counter++;
    }
    return counter;
}

int main() {
    const int size = 10;
    int arr[size];
    int argmin, argmax;
    init_array(arr, size);
    printf("%d\n", count_greater(arr, size, find_max_array(size, arr)));
}
