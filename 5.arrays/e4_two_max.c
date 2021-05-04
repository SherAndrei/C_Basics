#include <stdio.h>

int init_array(int arr[], int size) {
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    return 0;
}

int two_max(int arr[], int size) {
    if (size == 0)
        return -1;
    int max = arr[0], prev_max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            prev_max = max;
            max = arr[i];
        }
    }
    printf("%d\n", prev_max + max);
}

int main() {
    const int size = 10;
    int arr[size];
    init_array(arr, size);
    two_max(arr, size);
}
