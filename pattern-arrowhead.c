#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);
    
    
    if (N < 2) {
        printf("Shape Not Possible");
        return 0;
    }
    for(int i = 1; i <= N; ++i) {
        for(int j = 1; j <= i;  ++j) {
            if (j == i || j == 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    for(int i = 1; i <= N - 1; ++i) {
        for(int j = 1; j <= (N - i + 1) - 1;  ++j) {
            if (j == (N - i + 1) - 1 || j == 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}