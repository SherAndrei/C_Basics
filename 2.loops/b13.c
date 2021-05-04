#include <stdio.h>
#include <ctype.h>

int main() {
    char current;
    int odd_sum = 0, even_sum = 0;
    while (current = getchar()) {
        if (!isdigit(current))
            break;
        (current % 2) ? odd_sum++ : even_sum++;
    }
    printf("%d %d\n", even_sum, odd_sum);
}
