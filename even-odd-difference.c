#include <stdio.h>

int main() {

    int N;
    long evenSum = 0, oddSum = 0;
    scanf("%d", &N);
    
    long arr[N];
    
    
    for (int i = 0; i <= N-1; ++i) {
        scanf("%ld", &arr[i]);
        if (i % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }
    
    printf("%ld", evenSum - oddSum);
    return 0;
}
