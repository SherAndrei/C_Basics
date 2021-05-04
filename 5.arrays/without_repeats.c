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

int find_elem(int arr[], int size, int elem) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == elem)
            return i;
    }
    return -1;
}

int find_unique(int arr[], int size, int unique[]) {
    int unique_size = 0;
    int i;
    for (i = 0; i < size; i++) {
        if (find_elem(unique, unique_size, arr[i]) < 0) {
            unique[unique_size++] = arr[i];
        }
    }
    return unique_size;
}


int main() {
    const int size = 10;
    int arr[size], unique[size];
    init_array(arr, size);
    int unique_size = find_unique(arr, size, unique);
    print_array(unique, unique_size);
}
