#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define LEN (1024)

int read_line(FILE* inp, char* buf) {
    fscanf(inp, "%[^\n]s", buf);
}

void repeat(FILE* inp, FILE* out, int ntimes) {
    char buf[LEN];
    read_line(inp, buf);
    for (int i = 0; i < 3; i++) {
        fprintf(out, "%s", buf);
        if (i != ntimes - 1)
            fputc(',', out);
        fputc(' ', out);
    }
    fprintf(out, "%ld", strlen(buf));
}

int main() {
    FILE* input, *output;
    input = fopen("input.txt", "r");
    if (!input) {
        fprintf(stderr, "Cannot open input file\n");
        return -1;
    }
    output = fopen("output.txt", "w");

    repeat(input, output, 3);

    fclose(input);
    fclose(output);
}
