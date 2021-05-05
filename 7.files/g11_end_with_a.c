#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define LEN (1024)

int read_line(FILE* inp, char* buf) {
    return fscanf(inp, "%[^\n]s", buf);
}

typedef struct string_view {
    char* data;
    size_t size;
} sview;

void remove_prefix(sview *sv, size_t n) {
    while (n--> 0) {
        sv->data++;
        sv->size--;
    }
}

void left_strip(sview* sv) {
    while (sv->size != 0 && isspace(*sv->data)) {
        remove_prefix(sv, 1);
    }
}

sview read_token(sview* sv) {
    sview res;
    left_strip(sv);

    res.data = sv->data;
    char* pos = strpbrk(sv->data, " \n\t");
    res.size = (pos != NULL) ? (pos - sv->data) : sv->size;
    remove_prefix(sv, res.size);
    return res;
}

void count_ends_with_a(FILE* inp, FILE* out) {
    char line[LEN];
    read_line(inp, line);
    sview svline;
    sview token;
    int counter = 0;

    svline.data = line;
    svline.size = strlen(line);

    while (svline.size != 0) {
        token = read_token(&svline);
        if (token.data[token.size - 1] == 'a') {
            counter++;
        }
    }

    fprintf(out, "%d", counter);
}


int main() {
    FILE* input, *output;
    input = fopen("input.txt", "r");
    if (!input) {
        fprintf(stderr, "Cannot open input file\n");
        return -1;
    }
    output = fopen("output.txt", "w");

    count_ends_with_a(input, output);

    fclose(input);
    fclose(output);
}
