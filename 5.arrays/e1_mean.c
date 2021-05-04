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
    int array[5];
    init_array(array, 5);
    printf("%.3f\n", mean(array, 5));
}
