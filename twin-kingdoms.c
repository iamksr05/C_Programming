#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long A, B;
    scanf("%lld %lld", &A, &B);

    while (B != 0) {
        long long temp = B;
        B = A % B;
        A = temp;
    }

    printf("%lld", A);
    return 0;
}