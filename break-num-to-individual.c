#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void split(int n, int *A, int *B, int *C) {
    *A = n / 100;
    *B = ( n / 10 ) % 10;
    *C = n % 10;
}
int main() {

    int num, A, B, C;
    scanf("%d", &num);
    split(num, &A, &B, &C);
    printf("%d %d %d", A, B, C);
    

    return 0;
}
