#include <stdio.h>

int init_array(int arr[], int size) {
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    return 0;
}

unsigned long positive_sum(int arr[], int size) {
    unsigned long sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0)
            sum += arr[i];
    }
    return sum;
}

int main() {
    const int size = 10;
    int arr[size];
    init_array(arr, size);
    printf("%lu\n", positive_sum(arr, size));
}
