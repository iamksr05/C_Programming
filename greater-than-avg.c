#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long N, count = 0;
    double sum = 0.0;
    scanf("%ld", &N);
    
    long long arr[N];
    for (long i = 0; i <= N-1; ++i) {
        scanf("%lld", &arr[i]);
        sum += arr[i];
    }
    
    double avg = sum / N;
    
    for (int i = 0; i <= N-1; ++i) {
        if (arr[i] > avg) {
            count++;
        }
    }
    
    printf("%ld", count);
    
    
    return 0;
}
