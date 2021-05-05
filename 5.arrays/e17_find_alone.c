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

void fill_array(int arr[], int size) {
    for (int i = 0; i < size; i++)
        arr[i] = 0;
}

int find_elem(int arr[], int size, int elem) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == elem)
            return i;
    }
    return -1;
}

void copy(int from[], int size, int to[]) {
    for (int i = 0; i < size; i++)
        to[i] = from[i];
}


int argmax(int arr[], int size) {
    if (size == 0)
        return -1;
    int max = arr[0];
    int max_pos = 0;
    for (int i = 1; i < size; i++) {
        if (max < arr[i]) {
            max = arr[i];
            max_pos = i;
        }
    }
    return max_pos;
}

int find_alones(int arr[], int size, int alones[]) {
    int alones_size = 0;
    int before = 0, after = 0;
    for (int i = 0; i < size; i++) {
        before = find_elem(arr, i, arr[i]);
        after  = find_elem(arr + i + 1, size - i - 1, arr[i]);
        if (before == -1 && after == -1)
            alones[alones_size++] = arr[i];
    }
    return alones_size;
}
int main() {
    const int size = 10;
    int arr[size], alones[size];
    int alones_size;
    init_array(arr, size);
    alones_size = find_alones(arr, size, alones);
    print_array(alones, alones_size);
}
