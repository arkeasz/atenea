#include <stdio.h>

int main(void) {

    char x[64], y[64];
    if (scanf("%63s %63s", x, y) != 2)  {
        return 1;
    };
    unsigned char ca = (unsigned char)x[1];
    unsigned char cb = (unsigned char)y[1];
    if (ca < cb) printf("No\n");
    else if (cb > ca) printf("Yes\n");
    else printf("Yes\n");

    return 0;
}