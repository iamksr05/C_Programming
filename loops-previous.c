#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 0)
        return 0;

    printf("<");

    long long value = 1;
    for (int i = 0; i < n; i++) {
        if (i > 0)
            value *= 2;

        if (i == n - 1)
            printf("%lld>", value);
        else
            printf("%lld ", value);
    }

    return 0;
}