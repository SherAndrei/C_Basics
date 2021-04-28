#include <stdio.h>
#include <ctype.h>

int main() {
    char prev, current;
    int is_there_odd = 0;
    prev = getchar();
    is_there_odd = prev % 2;
    while (current = getchar()) {
        if (!isdigit(current))
            break;
        if (is_there_odd)
            break;
        is_there_odd = current % 2;
        prev = current;
    }
    printf((!is_there_odd) ? "YES\n" : "NO\n");
}
