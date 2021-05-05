#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define LEN (1024)

void count_letters(FILE* inp, int *nlower, int *nupper) {
    int upper = 0, lower = 0;
    char cur;
    while ((cur = fgetc(inp)) != EOF) {
        if (isupper(cur)) upper++;
        if (islower(cur)) lower++;
    }
    *nlower = lower;
    *nupper = upper;
}

int main() {
    FILE* input, *output;
    input = fopen("input.txt", "r");
    if (!input) {
        fprintf(stderr, "Cannot open input file\n");
        return -1;
    }
    output = fopen("output.txt", "w");

    int nlower = -1, nupper = -1;
    count_letters(input, &nlower, &nupper);
    fprintf(output, "%d %d\n", nlower, nupper);

    fclose(input);
    fclose(output);
}
