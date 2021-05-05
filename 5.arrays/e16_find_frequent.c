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


int find_most_frequent(int arr[], int size, int counters[]) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < i + 1; j++) {
            if (arr[i] == arr[j])
                counters[j]++;
        }
    }

    return arr[argmax(counters, size)];
}

int main() {
    const int size = 10;
    int arr[size], counters[size];
    int npos, nneg;
    init_array(arr, size);
    fill_array(counters, size);
    printf("%d\n", find_most_frequent(arr, size, counters));
}
