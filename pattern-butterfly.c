#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N;
    scanf("%d", &N);
    
    if (N < 2) {
        printf("Shape Not Possible");
        return 0;
    }
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("*");
        }
        for (int k = 1; k <= 2 * (N - i + 1) - 2; ++k) {
            printf(" ");
        }
        for (int l = 1; l <= i; ++l) {
            printf("*");
        }
            
        printf("\n");
    }
    
    for (int i = 1; i <= N - 1; ++i) {
        for (int j = 1; j <= (N - i + 1) - 1; ++j) {
            printf("*");
        }
        for (int k = 1; k <= 2 * i; ++k) {
            printf(" ");
        }
        for (int l = 1; l <= (N - i + 1) - 1; ++l) {
            printf("*");
        }
            
        printf("\n");
    }
    return 0;
}
