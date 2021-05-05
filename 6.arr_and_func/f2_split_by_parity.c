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

int find_even(int arr[], int size, int even[]) {
    int n = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0)
            even[n++] = arr[i];
    }
    return n;
}

int find_odd(int arr[], int size, int odd[]) {
    int n = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 1)
            odd[n++] = arr[i];
    }
    return n;
}

void copy(int from[], int size, int to[]) {
    for (int i = 0; i < size; i++)
        to[i] = from[i];
}

int main() {
    const int size = 20;
    int arr[size], even[size], odd[size], splitted[size];
    int nodd, neven;
    init_array(arr, size);
    neven = find_even(arr, size, even);
    copy(even, neven, splitted);
    nodd = find_odd(arr, size, odd);
    copy(odd, nodd, splitted + neven);
    print_array(splitted, neven + nodd);
}
