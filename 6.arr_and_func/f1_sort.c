void sort_array(int size, int a[]) {
    int i, j;
    int temp;
    for (i = 0; i < size; i++) {
        for (j = 1; j < size; j++) {
            if (a[j - 1] > a[j]) {
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
}
