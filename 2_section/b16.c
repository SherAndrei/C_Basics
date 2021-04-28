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
    int first, second;
    scanf("%d%d", &first, &second);
    printf("%d\n", GCD(first, second));
}
