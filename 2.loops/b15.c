#include <stdio.h>

int main() {
    int current;
    int counter = 0;
    while (scanf("%d", &current) == 1 && current != 0)
        if (current % 2 == 0) counter++;
    printf("%d\n", counter);
}
