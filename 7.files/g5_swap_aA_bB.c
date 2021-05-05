#include <stdio.h>
#include <ctype.h>

int swap_Aa_Bb(FILE* in, FILE* out) {
    char current;
    while ((current = fgetc(in)) != EOF) {
        if (current == 'a' || current == 'A') {
            fputc(current + 1, out);
            continue;
        }
        if (current == 'b' || current == 'B') {
            fputc(current - 1, out);
            continue;
        }
        fputc(current, out);
    }
}

int main() {
    FILE* input, *output;
    input = fopen("input.txt", "r");
    if (!input) {
        fprintf(stderr, "Cannot open input file\n");
        return -1;
    }
    output = fopen("output.txt", "w");

    swap_Aa_Bb(input, output);

    fclose(input);
    fclose(output);
}