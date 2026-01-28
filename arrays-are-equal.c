#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N, M;
    scanf("%d", &N);
    
    long arr1[N];
    for (int i = 0; i <= N-1; ++i) {
        scanf("%ld", &arr1[i]);
    }
    
    scanf("%d", &M);
    long arr2[M];
    for (int i = 0; i <= N-1; ++i) {
        scanf("%ld", &arr2[i]);
    }
    int count = 0;
    if (sizeof arr1/sizeof arr1[0] == sizeof arr2/sizeof arr2[0]) {
        for (int i = 0; i <= N-1; ++i) {
            if (arr1[i] == arr2[i]) {
              count += 1;  
            } else {
                printf("Not Equal");
                break;
            }
        }
        
    } else {
        printf("Not Equal");
    }
    
    if (count == N) {
        printf("Equal");
    }
    
    return 0;
}
