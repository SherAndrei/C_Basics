#include <stdio.h>
#include <ctype.h>

int print_even_digits() {
    char digit = getchar();
    if (!isdigit(digit))
        return 0;
    if (digit % 2 == 0)
        printf("%c ", digit);
    print_even_digits();
}

int main() {
    print_even_digits();
}
