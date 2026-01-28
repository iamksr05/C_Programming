#include <stdio.h>

int main() {

    int N, target, j;
    scanf("%d", &N);
    
    int arr[N];
    
    for (int i = 0; i <= N-1; ++i) {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &target);
    
    for (j = 0; j <= N-1; ++j) {
        if (target == arr[j]) {
            printf("%d", j);
            break;
        }
    }
    
    if (j == N) {
        printf("-1");
    }
    return 0;
}