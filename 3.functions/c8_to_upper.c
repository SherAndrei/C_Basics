#include <stdio.h>
#include <ctype.h>

int main() {
    char current;
    while ((current = getchar()) != '.')
        putchar(toupper(current));
}
