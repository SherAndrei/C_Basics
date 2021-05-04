#include <stdio.h>

int reverse() {
    char cur = getchar();
    if (cur != '.') {
        reverse();
        putchar(cur);
    }
}

int main() {
    reverse();
}

