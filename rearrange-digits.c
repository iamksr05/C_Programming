#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    int a = N / 1000;
    int b = (N / 100) % 10;
    int c = (N / 10) % 10;
    int d = N % 10;

    int num;

    if (a < b) {
        num = a;
        a = b;
        b = num;
    }
    //2583
    if (a < c) {
        num = a;
        a = c;
        c = num;
    }
    if (a < d) {
        num = a;
        a = d;
        d = num;
    }

    if (b < c) {
        num = b;
        b = c;
        c = num;
    }
    if (b < d) {
        num = b;
        b = d;
        d = num;
    }

    if (c < d) {
        num = c;
        c = d;
        d = num;
    }

    printf("%d%d%d%d", a, b, c, d);

    return 0;
}