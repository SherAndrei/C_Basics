#include <stdio.h>

int init_array(int arr[], int size) {
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    return 0;
}

int min(int arr[], int size) {
    if (size == 0)
        return -1;
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (min > arr[i]) min = arr[i];
    }
    return min;
}

int max(int arr[], int size) {
    if (size == 0)
        return -1;
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (max < arr[i]) max = arr[i];
    }
    return max;
}

int main() {
    int arr[5];
    init_array(arr, 5);
    printf("%d\n", min(arr, 5));
}
