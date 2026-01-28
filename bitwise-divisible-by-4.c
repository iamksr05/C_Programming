#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long N;
    scanf("%lld", &N);

    if (N < -2147483648LL || N > 2147483647LL) {
        printf("Out of Range");
        return 0;
    }

    if ((N & 3) == 0) {
        printf("Divisible");
    } else {
        printf("Not Divisible");
    }

    return 0;
}