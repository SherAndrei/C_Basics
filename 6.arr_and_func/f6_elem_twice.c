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


int find_repeatings(int arr[], int size, int reps[]) {
    int reps_size = 0;
    int found = 0;
    int pos_in_reps = 0;
    for (int i = 0; i < size; i++) {
        found = find_elem(arr, i, arr[i]);
        if (found == -1)
            continue;
        pos_in_reps = find_elem(reps, reps_size, arr[found]);
        if (pos_in_reps == -1)
            reps[reps_size++] = arr[found];
    }
    return reps_size;
}

int main() {
    const int size = 100;
    int arr[size], repeatings[size];
    int repeatings_size;
    init_array(arr, size);
    repeatings_size = find_repeatings(arr, size, repeatings);
    printf(repeatings_size ? "YES\n" : "NO\n");
}
