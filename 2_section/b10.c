#include <stdio.h>
#include <ctype.h>

int main() {
    char prev, current;
    int is_increasing = 1;
    prev = getchar();
    while (current = getchar()) {
        if (!isdigit(current))
            break;
        if (prev >= current) {
            is_increasing = 0;
            break;
        }
        prev = current;
    }
    printf((is_increasing) ? "YES\n" : "NO\n");
}
