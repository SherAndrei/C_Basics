#include <ctype.h>
#include <stdio.h>

int main() {
    char digit;
    int digit_counter[10] = {0};

    while (digit = getchar()) {
        if (!isdigit(digit))
            break;
        digit_counter[digit - '0']++;
    }
    for (int i = 0; i < 10; i++) {
        if (digit_counter[i] == 0)
            continue;
        printf("%d %d\n", i, digit_counter[i]);
    }
}
