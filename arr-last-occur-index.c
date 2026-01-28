#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N, index = 0, target, count = 0;
    scanf("%d", &N);
    
    int arr[N];
    
    for (int i = 0; i <= N-1; ++i) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);
    
    for (int i = 0; i <= N-1; ++i) {
        if (arr[i] == target) {
            index = i;
        } else {
            count ++;
        }
    }
    
    if (!index && count == N) {
        printf("-1");
    } else {
        printf("%d", index);
    }
    
    return 0;
}
