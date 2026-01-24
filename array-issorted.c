#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long N, count = 0;
    scanf("%ld", &N);
    
    long arr[N];
    
    for (long i = 0; i <= N-1; ++i) {
        scanf("%ld", &arr[i]);
    }
    
    for (long i = 0; i <= N-2; ++i) {
        if (arr[i] <= arr[i+1]){
            count++;
        }
    }
    
    if (count == N-1) {
        printf("Sorted");
    } else {
        printf("Not Sorted");
    }
    return 0;
}
