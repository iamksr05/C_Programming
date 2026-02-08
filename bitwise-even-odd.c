#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);
    int n = N & 1;
    if (n == 0) {
        printf("Even");
    } else {
        printf("Odd");
    }
    return 0;
}