#include <stdio.h>

void print_simple(int n) {
    int ncopy = n;
    for (int i = 2; i <= ncopy; i++) {
        while (n % i == 0) {
            printf("%d ", i);
            n = n/i;
        }
    }
}

int main() {
    int num;
    scanf("%d", &num);
    print_simple(num);
}
