#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define LEN (1024)

int read_line(FILE* inp, char* buf) {
    return fscanf(inp, "%[^\n]s", buf);
}

void find_letters_like_last(FILE* input, FILE* output) {
    char buf[LEN];
    read_line(input, buf);
    int len = strlen(buf);
    char last = buf[len - 1];
    char* p_same;
    char* offset = buf;
    while ((p_same = strchr(offset, last)) != NULL) {
        if (p_same == buf + len - 1)
            break;
        fprintf(output, "%ld ", p_same - buf);
        offset = p_same + 1;
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

    find_letters_like_last(input, output);

    fclose(input);
    fclose(output);
}
