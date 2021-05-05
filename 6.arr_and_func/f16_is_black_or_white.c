#include <stdio.h>

int main() {
    char letter = getchar(), digit = getchar();

    printf(((letter - 1 + digit) % 2 == 0) ? "WHITE\n" : "BLACK\n");
}
