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

int find_positives(int arr[], int size, int positives[]) {
    int npos = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0)
            positives[npos++] = arr[i];
    }
    return npos;
}

int find_negatives(int arr[], int size, int negatives[]) {
    int nneg = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0)
            negatives[nneg++] = arr[i];
    }
    return nneg;
}

void copy(int from[], int size, int to[]) {
    for (int i = 0; i < size; i++)
        to[i] = from[i];
}

int main() {
    const int size = 10;
    int arr[size], positives[size], negatives[size], splitted[size];
    int npos, nneg;
    init_array(arr, size);
    npos = find_positives(arr, size, positives);
    copy(positives, npos, splitted);
    nneg = find_negatives(arr, size, negatives);
    copy(negatives, nneg, splitted + npos);
    print_array(splitted, npos + nneg);
}
