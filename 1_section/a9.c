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
    int arr[5];
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    printf("%d\n", max(arr, 5));
}
