int arg_negmin(int arr[], int size, int* arg_negmin) {
    if (size == 0)
        return -1;
    int negmin = 0;
    int negmin_pos = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            if (negmin < arr[i] || negmin == 0) {
                negmin = arr[i];
                negmin_pos = i;
            }
        }
    }

    if (negmin == 0)
        return -2;
    *arg_negmin = negmin_pos;
    return 0;
}

void swap_negmax_last(int size, int a[]) {
    int pos;
    if (arg_negmin(a, size, &pos) == -2)
        return;
    swap(a + size - 1, a + pos);
}
