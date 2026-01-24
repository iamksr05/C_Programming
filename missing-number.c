#include <stdio.h>

int main() {

    int N;
    int count = 0;
    scanf("%d", &N);
    
    int arr[N-1];
    
    for (int i = 0; i <= N-2; ++i) {
        scanf("%d", &arr[i]);
    }
    
    int k;
    for (k = 1; k <= N; ++k) {
        for (int j = 0; j <= N-2; ++j) {
            if (arr[j] == k) {
                count = 1;
            }
        }
        
        if(!count) {
            break;
        }
        count = 0;
    }
    
    printf("%d", k);
    return 0;
}