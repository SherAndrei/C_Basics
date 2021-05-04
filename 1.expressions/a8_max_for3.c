#include <stdio.h>

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
    int arr[3];
    scanf("%d%d%d", &arr[0], &arr[1], &arr[2]);
    printf("%d\n", max(arr, 3));
}
