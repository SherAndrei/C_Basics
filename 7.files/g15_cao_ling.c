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

int is_end_of_token(char ch) {
    return (!isalpha(ch));
}

void left_strip(sview* sv) {
    while (sv->size != 0 && is_end_of_token(sv->data[0])) {
        remove_prefix(sv, 1);
    }
}

char* find_first_non_letter(char* data) {
    while (isalpha(data[0]))
        data++;
    return data;
}

sview read_token(sview* sv) {
    sview res;
    left_strip(sv);

    res.data = sv->data;
    char* pos = find_first_non_letter(sv->data);
    res.size = (pos != NULL) ? (pos - sv->data) : sv->size;
    remove_prefix(sv, res.size);
    return res;
}

void cao_ling(FILE* inp, FILE* out) {
    char line[LEN] = {'\0'};
    int i;
    read_line(inp, line);

    sview svline;
    svline.data = line;
    svline.size = strlen(line);

    sview token;
    char * offset;
    while (svline.size != 0) {
        offset = svline.data;
        token = read_token(&svline);
        fwrite(offset, sizeof(char), token.data - offset, out);
        for (i = 0; i < (int)token.size - 2; i++) {
            if (token.data[i] == 'C' && token.data[i + 1] == 'a' && token.data[i + 2] == 'o') {
                i += 2;
                fprintf(out, "Ling");
            } else {
                fputc(token.data[i], out);
            }
        }
        for (; i < token.size; i++)
            fputc(token.data[i], out);
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

    cao_ling(input, output);

    fclose(input);
    fclose(output);
}
