#include <stdio.h>

int init_array(int arr[], int size) {
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    return 0;
}


int is_array_down(int a[], int size) {
    for (int i = 1; i < size; i++) {
        if (a[i] >= a[i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    const int size = 30;
    int arr[size];
    init_array(arr, size);
    printf((is_array_down(arr, size)) ? "YES\n" : "NO\n");
}
