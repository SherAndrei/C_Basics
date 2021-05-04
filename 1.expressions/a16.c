#include <stdio.h>

int main() {
    int is_increasing = 1;
    int prev, current;
    scanf("%d", &prev);
    while (scanf("%d", &current) == 1) {
        if (current <= prev) {
            is_increasing = 0;
            break;
        }
        prev = current;
    }
    printf((is_increasing) ? "YES\n" : "NO\n");
}
