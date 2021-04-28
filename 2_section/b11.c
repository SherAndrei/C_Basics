#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char number[30];
    fgets(number, sizeof(number), stdin);
    for (int i = strlen(number); i > 0; i--) {
        if (!isdigit(number[i - 1]))
            continue;
        putchar(number[i - 1]);
    }
    putchar('\n');
}
