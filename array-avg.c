#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N;
    scanf("%d", &N);
    int arr[N];
    
    double sum = 0L;
    
    for (int i = 0; i <= N-1; ++i) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }   
    
    printf("%f", sum / N);
    
    return 0;
}
