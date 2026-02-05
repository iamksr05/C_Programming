#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int mask = n & 15;
    int count = 0;

    while (mask) {
        count += mask & 1;
        mask >>= 1;
    }

    printf("%d", count);
    return 0;
}