#include <stdio.h>
#include <ctype.h>

int main() {
    char prev, current;
    int is_there_two_equal_digigts = 0;
    char is_digit_in_number[10] = {0};
    prev = getchar();
    is_digit_in_number[prev - '0']++;
    while (current = getchar()) {
        if (!isdigit(current))
            break;
        if (is_digit_in_number[current - '0']++ != 0) {
            is_there_two_equal_digigts = 1;
            break;
        }
        prev = current;
    }
    printf((is_there_two_equal_digigts) ? "YES\n" : "NO\n");
}
