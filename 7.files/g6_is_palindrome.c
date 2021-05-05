#include <stdio.h>
#include <string.h>

#define LEN (1024)

int is_palindrom(char str[]) {
    int len = strlen(str);
    printf("%d\n", len);
    puts(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1])
            return 0;
    }
    return 1;
}

int main() {
    FILE* input, *output;
    input = fopen("input.txt", "r");
    if (!input) {
        fprintf(stderr, "Cannot open input file\n");
        return -1;
    }
    output = fopen("output.txt", "w");

    char str[LEN];
    fscanf(input, "%[^\n]s", str);

    int res = is_palindrom(str);

    fputs((res) ? "YES\n" : "NO\n", output);

    fclose(input);
    fclose(output);
}
