#include <stdio.h>

int GCD(int first, int second) {
    while (first != 0 && second != 0) {
        if (first > second)
            first = first % second;
        else
            second = second % first;
    }

    return first + second;
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", GCD(a, b));
}
