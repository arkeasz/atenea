#include <stdio.h>
#include <string.h>

int main() {

    char s[64];
    int freq[256] = {0};
    if (scanf("%63s", s) != 1)  {
        return 1;
    };

    size_t len = strlen(s);
    char *chars = s;
    char str[256];
    strcpy(str, chars);
    int i;
    for (i = 0; i < len; i++) {
        printf("%d",  (unsigned char)str[i]);
        freq[(unsigned char)str[i]]++;
        printf("%s", freq[(unsigned char)str[i]]++);
    }
    int result = -1;

    for (i = 0; i < 256; i++) {
        if (freq[i] == 1) {
            result = i;
        }
    }

    printf("%c", (char)result);

    return 0;
}
