#include <stdio.h>
#include <ctype.h>
#include <string.h>

void swap_neighbours(FILE* inp, FILE* out) {
    char prevprev, prev, cur;

    // prevprev = fgetc(inp);
    // if (feof(inp)) {
        // return;
    // }
    // prev = fgetc(inp);
    // if (feof(inp)) {
        // fputc(prevprev, out);
        // return;
    // }
    while (1) {
        prev = fgetc(inp);
        cur  = fgetc(inp);
        if (feof(inp) || prev == '\n' || cur == '\n')
            break;
        if (isspace(prev) && isspace(cur)) {
            continue;
        }
        if (isspace(cur)) {
            
        }
        fputc(cur, out);
        fputc(prev, out);
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

    swap_neighbours(input, output);

    fclose(input);
    fclose(output);
}
