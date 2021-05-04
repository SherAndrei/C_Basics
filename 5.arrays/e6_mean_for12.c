#include <stdio.h>

int init_array(int arr[], int size) {
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    return 0;
}

double mean(int arr[], int size) {
    double mean = 0;
    for (int i = 0; i < size; i++) {
        mean += arr[i];
    }
    return mean / size;
}

int main() {
    const int size = 12;
    int array[size];
    init_array(array, size);
    printf("%.2f\n", mean(array, size));
}
