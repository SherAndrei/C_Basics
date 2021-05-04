#include <stdio.h>
#include <ctype.h>

int main() {
    char prev, current;
    char is_digit_in_number[10] = {0};
    prev = getchar();
    is_digit_in_number[prev - '0']++;
    while (current = getchar()) {
        if (!isdigit(current))
            break;
        is_digit_in_number[current - '0']++;
        prev = current;
    }
    printf((is_digit_in_number[9] == 1) ? "YES\n" : "NO\n");
}
