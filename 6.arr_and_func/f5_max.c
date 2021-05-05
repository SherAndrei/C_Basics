int find_max_array(int size, int a[]) {
    if (size == 0)
        return -1;
    int max = a[0];
    for (int i = 1; i < size; i++) {
        if (max < a[i]) max = a[i];
    }
    return max;
}
