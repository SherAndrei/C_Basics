#include <stdio.h>
#include <ctype.h>

int main() {
    char prev, current;
    int is_two_equals_nearby = 0;
    prev = getchar();
    while (current = getchar()) {
        if (!isdigit(current))
            break;
        if (prev == current)
            is_two_equals_nearby = 1;
        prev = current;
    }
    printf((is_two_equals_nearby) ? "YES\n" : "NO\n");
}
