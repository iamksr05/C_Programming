#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    int temp = N;
    int sum = 0;

    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    if (N % sum == 0)
        printf("%d is a harshad number", N);
    else
        printf("%d is not a harshad number", N);

    return 0;
}