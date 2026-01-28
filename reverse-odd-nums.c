#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);
    
    for (int i = 1; i <= N; ++i) {
        (i < N) ? printf("%d ", 2 * (N-i+1)-1) : printf("%d.", 2 * (N-i+1)-1);
    }
    return 0;
}