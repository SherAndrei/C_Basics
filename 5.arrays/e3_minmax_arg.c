#include <stdio.h>

int init_array(int arr[], int size) {
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    return 0;
}

int arg_minmax(int arr[], int size) {
    if (size == 0)
        return -1;
    int min = arr[0], max = arr[0];
    int min_pos = 1, max_pos = 1;
    for (int i = 1; i < size; i++) {
        if (min > arr[i]) {
            min = arr[i];
            min_pos = i+1;
        }
        if (max < arr[i]) {
            max = arr[i];
            max_pos = i+1;
        }
    }
    printf("%d %d %d %d\n", max_pos, max, min_pos, min);
}

int main() {
    const int size = 10;
    int arr[size];
    init_array(arr, size);
    arg_minmax(arr, size);
}
