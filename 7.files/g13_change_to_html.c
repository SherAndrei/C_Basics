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

void change_to_html(FILE* inp, FILE* out) {
    char line[LEN];
    read_line(inp, line);
    sview svline;
    char *pdot, *pslash;
    svline.data = line;
    svline.size = strlen(line);

    pslash = strrchr(svline.data, '/');
    pdot = strrchr(svline.data, '.');

    if (pslash > pdot || pslash == NULL) {
        fwrite(svline.data, sizeof(char), svline.size, out);
    } else {
        fwrite(svline.data, sizeof(char), pdot - svline.data, out);
    }
    fprintf(out, ".html");
}


int main() {
    FILE* input, *output;
    input = fopen("input.txt", "r");
    if (!input) {
        fprintf(stderr, "Cannot open input file\n");
        return -1;
    }
    output = fopen("output.txt", "w");

    change_to_html(input, output);

    fclose(input);
    fclose(output);
}
