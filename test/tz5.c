#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define len (1024)

int arg_min(int arr[], int size) {
    if (size == 0)
        return -1;
    int min = 0;
    int min_pos = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0)
            continue;
        if (min == 0 || min > arr[i]) {
            min = arr[i];
            min_pos = i;
        }
    }
    for (int i = 0; i < size; i++) {
        if (arr[i] == min) {
            min_pos = i;
            break;
        }
    }
    return min_pos;
}
void print_rare_symbol(char s[]) {
    int alphabet[26] = {0};
    int leng = strlen(s);
    for (int i = 0; i < leng; i++) {
        if (isspace(s[i]))
            continue;
        alphabet[s[i] - 'a']++;
    }
    int idx = arg_min(alphabet, 26);
    printf("%c %d\n", idx + 'a', alphabet[idx]);
}

int main() {
    char buf[len];
    fgets(buf, len, stdin);
    print_rare_symbol(buf);
}
