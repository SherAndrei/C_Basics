#include <stdio.h>
#include <ctype.h>

int main() {
    char prev, current;
    char min_digit, max_digit;
    prev = getchar();
    min_digit = max_digit = prev;
    while (current = getchar()) {
        if (!isdigit(current)) break;
        if (current < min_digit)
            min_digit = current;
        else if (max_digit < current)
            max_digit = current;
        prev = current;
    }
    printf("%c %c\n", min_digit, max_digit);
}
