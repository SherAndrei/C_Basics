#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define LEN (1024)

int read_line(FILE* inp, char* buf) {
    fscanf(inp, "%[^\n]s", buf);
}

void form_string(FILE* inp, FILE* out) {
    int N;
    fscanf(inp, "%d", &N);
    char alph = 'A';
    char num = '2';
    for (int i = 0; i < N; i++) {
        if ((i % 10) % 2 == 0) {
            fputc(alph++, out);
        } else {
            fputc(num, out);
            num += 2;
            if (num - 1 == '9') num = '2';
        }
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

    form_string(input, output);

    fclose(input);
    fclose(output);
}
