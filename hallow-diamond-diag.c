#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);
    
    if (N < 2) {
        printf("Shape Not Possible");
        return 0;
    }
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N - i; ++j) {
            printf(" ");
        }
        
        for (int k = 1; k <= (2*i) - 1; ++k) {
            if (k == i || k == 1 || k == (2*i)-1 || i == N) {
               printf("*"); 
            } else {
                printf(" ");
            }
            
        }
        printf("\n");
    }
    
    for (int i = 1; i <= N - 1; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf(" ");
        }
        
        for (int k = 1; k <= 2 * (N - i) - 1; ++k) {
            if (k == 1 || k == 2 * (N - i + 1) - 3 || k  == (2 * (N - i) - 1) / 2 + 1) {
                printf("*");
            } else {
                printf(" ");
            }
            
        }
        printf("\n");
    }
    
    return 0;
}